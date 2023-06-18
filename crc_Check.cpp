// Include headers
#include<stdio.h>
#include<string.h>
// C++ Program to generate CRC codeword
#include <iostream>
#include <math.h>


using namespace std;

// function to convert integer to binary string
string toBin(long long int num)
{
	string bin = "";
	while (num) {
		if (num & 1)
			bin = "1" + bin;
		else
			bin = "0" + bin;
		num = num >> 1;
	}
	return bin;
}

// function to convert binary string to decimal
long long int toDec(string bin)
{
	long long int num = 0;
	for (int i = 0; i < bin.length(); i++) {
		if (bin.at(i) == '1')
			num += 1 << (bin.length() - i - 1);
	}
	return num;
}

// function to compute CRC and codeword
void CRC(string dataword, string generator)
{
	int l_gen = generator.length();
	long long int gen = toDec(generator);

	long long int dword = toDec(dataword);

	// append 0s to dividend
	long long int dividend = dword << (l_gen - 1);

	// shft specifies the no. of least
	// significant bits not being XORed
	int shft = (int)ceill(log2l(dividend + 1)) - l_gen;
	long long int rem;

	while ((dividend >= gen) || (shft >= 0)) {

		// bitwise XOR the MSBs of dividend with generator
		// replace the operated MSBs from the dividend with
		// remainder generated
		rem = (dividend >> shft) ^ gen;
		dividend = (dividend & ((1 << shft) - 1))
				| (rem << shft);

		// change shft variable
		shft = (int)ceill(log2l(dividend + 1)) - l_gen;
	}

	// finally, AND the initial dividend with the remainder
	// (=dividend)
	long long int codeword
		= (dword << (l_gen - 1)) | dividend;
	cout << "Remainder: " << toBin(dividend) << endl;
	cout << "Codeword : " << toBin(codeword) << endl;
}



// length of the generator polynomial
#define N strlen(gen_poly)
// data to be transmitted and received
char data[28];
// CRC value
char check_value[28];
// generator polynomial
char gen_poly[10];
// variables 
int data_length,i,j;
// function that performs XOR operation
void XOR(){
    // if both bits are the same, the output is 0
    // if the bits are different the output is 1
    for(j = 1;j < N; j++)
    check_value[j] = (( check_value[j] == gen_poly[j])?'0':'1');
    
}
void crc(){
    // initializing check_value
    for(i=0;i<N;i++)
        check_value[i]=data[i];
    do{
    // check if the first bit is 1 and calls XOR function
        if(check_value[0]=='1')
            XOR();
// Move the bits by 1 position for the next computation
        for(j=0;j<N-1;j++)
            check_value[j]=check_value[j+1];
        // appending a bit from data
        check_value[j]=data[i++];
    }while(i<=data_length+N-1);
// loop until the data ends
}
// Function to check for errors on the receiver side
void receiver(){
// get the received data
    printf("Enter the received data: ");
    scanf("%s", data);
    CRC(data, gen_poly);
    printf("\n-----------------------------\n");
    printf("Data received: %s", data);
// Cyclic Redundancy Check
    crc();
// Check if the remainder is zero to find the error
    for(i=0;(i<N-1) && (check_value[i]!='1');i++);
        if(i<N-1)
            printf("\nError detected\n\n");
        else
            printf("\nNo error detected\n\n");
}



int main()
{
    // get the data to be transmitted
    printf("\nEnter data to be transmitted: ");
    scanf("%s",data);
    printf("\n Enter the Generating polynomial: ");
    // get the generator polynomial
    scanf("%s",gen_poly);
    // find the length of data
    data_length=strlen(data);
    // appending n-1 zeros to the data
    for(i=data_length;i<data_length+N-1;i++)
        data[i]='0';
    printf("\n----------------------------------------");
// print the data with padded zeros
    printf("\n Data padded with n-1 zeros : %s",data);
    printf("\n----------------------------------------");
// Cyclic Redundancy Check
    crc();
// print the computed check value
    printf("\nCRC or Check value is : %s",check_value);
// Append data with check_value(CRC)  
    for(i=data_length;i<data_length+N-1;i++)
        data[i]=check_value[i-data_length];
    printf("\n----------------------------------------");
// printing the final data to be sent
    printf("\n Final data to be sent : %s",data);
    printf("\n----------------------------------------\n");
    
// Calling the receiver function to check errors
    receiver();
        return 0;
}
