#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int max=1000;
    char str[max];
    fgets(str,max,stdin);
    strlwr(str);

    int l=strlen(str);
    bool check[1000];
    for (int i=0;i<l;i++){
        check[(int)str[i]]=false;
    }
    int b=-1;char ans[1000];
    for(int i = 0; i < l; i++){
        if(check[(int)str[i]] == false){
            b++;
            ans[b] = str[i];
            check[(int)str[i]]= true;
        }
    }int pro=1;
    for (int i=0;i<b;i++){
        int count=0;
        for(int j=0;j<l;j++ ){
            if (str[j]==ans[i]){
                count++;
            }
        }
        // printf("%c %d\n",ans[i],count);
        pro=pro*count;


    }
    printf("%d",pro);

}