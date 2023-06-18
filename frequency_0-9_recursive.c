#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Input (stdin)
// a11472o5t6
// Expected Output
// 0 2 1 0 1 1 1 1 0 0 

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
}//0 2 1 0 1 1 1 1 0 0
int main() {
    
    char *str;
    str=malloc(1000*sizeof(char));
    scanf("%s",str);
    
    for (int i='0';i<='9';i++){
        printf("%d ",freq(str,i));
    }
       
    return 0;
}