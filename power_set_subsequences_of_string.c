#include<stdio.h>
#include<string.h>
#include<math.h>
char *substring(char *str,int len,char *ans){
    int total=(int)pow(2,len);strcpy(ans,"");
    for(int num=0;num<=total-1;num++){
        for(int i=0;i<=len-1;i++){
            if(num & (1<<i)){
                strncat(ans,&str[i],1);                             
            }
        }
        strcat(ans," ");
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