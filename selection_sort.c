# include <stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int max_of_array(int *a,int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int min_of_array(int *a,int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
void sort_array(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void print_array(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}