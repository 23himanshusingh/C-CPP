#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
int isKeyword(char buffer[]){
char keywords[50][25] = {"False", "None", "True", "and", "as", "assert", "break", "class", 
"continue", "def", "del", "elif", "else", "except", "finally", 
"for", "from", "global", "if", "import", "in", "is", "lambda", 
"nonlocal", "not", "or", "pass", "raise", "return", 
"try", "while", "with", "yield"};
int i, flag = 0;
for(i = 0; i < 50; ++i){
if(strcmp(keywords[i], buffer) == 0){
flag = 1;
break;
}
}
return flag;
}
 
int main(){
char ch, buffer[15], operators[] = "+-*/%=";
FILE *fp;
int i,j=0;
fp = fopen("program.txt","r");
if(fp == NULL){
printf("error while opening the file\n");
exit(0);
}
while((ch = fgetc(fp)) != EOF){
   for(i = 0; i < 6; ++i){
   if(ch == operators[i])
   printf("%c is operator\n", ch);
   }
   
   if(ch == '#')
   printf("%c is comment\n", ch);
   
  
   if(isalnum(ch)){
   buffer[j++] = ch;
   }
   else if((ch == ' ' || ch == '\n') && (j != 0)){
   buffer[j] = '\0';
   j = 0;
     
   if(isKeyword(buffer) == 1)
   printf("%s is keyword\n", buffer);
   else
   printf("%s is identifier\n", buffer);
   }
  
}
fclose(fp);
return 0;
}
