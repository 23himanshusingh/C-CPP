# include<stdio.h>
int main(){
    int n;
    int key;
    scanf("%d",&key);
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }int c=0;
    for (int i=1;i<n;i++){
        if (arr[i]==key){
            printf("found");
            c++;
            break;

        }
    }
    if (c==0){
        printf("not found");
    }
    return 0;

}


