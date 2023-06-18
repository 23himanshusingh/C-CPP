#include<stdio.h>
#include<stdlib.h>
#include<string.h> //To use the string functions like strcmp and strcpy

#define MAX 10  // This is the default size of every string 

void Merge(char* arr[],int low,int mid,int high) //Merging the Array Function
{
    int nL= mid-low+1;
    int nR= high-mid;

    char** L=malloc(sizeof(char *)*nL);
    char** R=malloc(sizeof(char *)*nR);
    int i;
    for(i=0;i<nL;i++)
    {
        L[i]=malloc(sizeof(arr[low+i]));
        strcpy(L[i],arr[low+i]);
    }
    for(i=0;i<nR;i++)
    {
        R[i]=malloc(sizeof(arr[mid+i+1]));
        strcpy(R[i],arr[mid+i+1]);
    }
    int j=0,k;
    i=0;
    k=low;
    while(i<nL&&j<nR)
    {
        if(strcmp(L[i],R[j])<0)strcpy(arr[k++],L[i++]);
        else strcpy(arr[k++],R[j++]);
    }
    while(i<nL)strcpy(arr[k++],L[i++]);
    while(j<nR)strcpy(arr[k++],R[j++]);

}


void MergeSort(char* arr[],int low,int high) //Main MergeSort function
{
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}


int main()
{
    printf("\nEnter the size of the array desired: ");
    int size;  //This is the String array size
    scanf("%d",&size);

    char** arr= malloc(sizeof(char *)* size); //Creating required string array
    printf("\nEnter the strings of the array: ");

    int i;
    for(i=0;i<size;i++)
    {
        arr[i]=malloc(sizeof(char)*MAX);
        printf("\nEnter String: ");
        scanf("%s",arr[i]);
    }
    MergeSort(arr,0,size-1);
    printf("\nThe Sorted Array is: ");
    for(i=0;i<size;i++)printf("%s ->",arr[i]);
    return 0;

}