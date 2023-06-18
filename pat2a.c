#include <stdio.h>
#include <string.h>
void substring(char s[],char sub[], int p, int len)
{
    int c=0;
    while (c<len)
    {
      sub[c]=s[p+c];
      c++;
    }
    sub[c]='\0';
}
int main()
{
    char c[10],str[10];
    printf(" ");
    scanf("%s", str);
    int i,j,len=strlen(str);
    printf(" ");
    for(i=0;i<len;i++)
    {
        for(j=1;j<=len-i;j++)
        {
            substring(str,c,i,j);
            printf("%s ",c);
        }
    }
    printf("%c%c",str[0],str[2]);
    return 0;
}