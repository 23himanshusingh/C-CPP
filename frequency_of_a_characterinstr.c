#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int freq(char *str,char ch){
    if (*str=='\0'){
        return 0;
    }
    else if (*str==ch){
        return 1+freq(str+1,ch);
    }
    else{
        return freq(str+1,ch);
    }
}
int main() {
    
    char*str;
    scanf("%s",str);
    
    for (int i='0';i<='9';i++){
        printf("%d ",freq(str,i));
    }
       
    return 0;
}
