#include<stdio.h>
#include<string.h>
char *substring(char *str,int len,char *ans){
    strcpy(ans,"");
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len+1;j++){
            for(int k=i;k<j;k++){
                strncat(ans,&str[k],1);
            }
            strcat(ans," ");
        }
    }
    return ans;
}
int main(){
    char ans[1000]={'\0'};
    char str[10000];
    fgets(str,10000,stdin);
    int len=strlen(str);
    printf("%s",substring(str,len,ans));
    return 0;
    
}    