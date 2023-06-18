#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100],temp[100];
    fgets(str,100,stdin);int k=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            temp[k]=str[i];
            k++;
        }
    }int u=0;int x;
    for (int i=1;i<len;i++){
        if (str[i]>='a' && str[i]<='z'){
            x=((str[i]+temp[u++]-96)-96);
            if (x>26){
                str[i]=(char)((x%26)+96);
                
            }
            else{
                str[i]=(char)(x+96);
            }

        }
    }
    printf("%s",str);
    return 0;
}