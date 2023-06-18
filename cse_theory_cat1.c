#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//sort array of strings
// void sort(char *str[], int n)
// {
//     int i, j;
//     char *temp;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n-1; j++)
//         {
//             if (strlen(str[j])>strlen(str[j + 1]) > 0)
//             {
//                 temp = str[j];
//                 str[j] = str[j + 1];
//                 str[j + 1] = temp;
//             }
//         }
//     }
// }
// void print(char *str[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("%s\n", str[i]);
// 	}
// }
// int main()
// {
// 	char *str[] = {"geeks", "for", "geekss", "practice", "geekkks"};
// 	int n = sizeof(str) / sizeof(str[0]);
// 	sort(str, n);
// 	print(str, n);
// 	return 0;
// }

// recursive function to find the frequency of a digit in a number
int findDigit(int num, int digit)
{
	if (num == 0)
		return 0;
	if (num % 10 == digit)
		return 1 + findDigit(num / 10, digit);
	else
		return findDigit(num / 10, digit);
}

void maxfrequency(int arr[], int n,int *d,int dummy,int *max)
{
	int i, count;
	for (i = 0; i <= n; i++)
	{
		count = findDigit(dummy, arr[i]);
		if (count > *max)
		{
			*max = count;
			*d = arr[i];
		}
	}
	printf("most frequent digit is %d and its frequency is %d", *d, *max);
}


int main()
{
    int num;
	int dummy=num;
    printf("Enter a number: ");
    scanf("%d", &num);int arr[10000];int n=0;
	while (num>0){
		arr[n++]=num%10;
		num=num/10;
	}
	int freq=0;
	int d=arr[0]; maxfrequency(arr, n, &d, dummy, &freq);
	
	return 0;
}





