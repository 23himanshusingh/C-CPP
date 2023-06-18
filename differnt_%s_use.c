#include<stdio.h>
int main()
{
    char country[15]="United Kingdom";
    printf("|%15s|\n",country);
    printf("|%5s|\n",country);
    printf("|%15.6s|\n",country);
    printf("|%.6s|\n",country);
    printf("|%15.0s|\n",country);
    printf("|%.3s|\n",country);
    printf("|%s|\n",country);
    return 0;
}