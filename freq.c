#include<stdio.h>
int frequencyDigits(int num, int digit)
{
    if (num == 0){
        return 0;
    }
    else if(num % 10 == digit){
        return 1 + frequencyDigits(num / 10, digit);
    }
    else{
        return frequencyDigits(num / 10, digit);
    }
}
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int findMaxRec(int arr[],int n){
    if (n==1){
        return arr[0];
    }
    else{
        return max(arr[n-1],findMaxRec(arr,n-1));
    }

}
int main()
{
    int num;scanf("%d",&num);int dummy=num;int arr[1000];int i=0;
    while (num>0){
        arr[i++]=num%10;
        num/=10;
    }
    printf("FREQ=%d\n",frequencyDigits(dummy,findMaxRec(arr,i)));
    printf("DIGIT=%d\n",findMaxRec(arr,i));
    return 0;
}
