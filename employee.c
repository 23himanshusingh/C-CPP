#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int employee_id;
    int basic_pay;
    float DA;
    int HRA;


};

int main(){

    struct employee e1;
    scanf("%d",&e1.employee_id);
    scanf("%d",&e1.basic_pay);
    scanf("%f",&e1.DA);
    scanf("%d",&e1.HRA);
    float x = (e1.basic_pay*e1.DA)/100;
    float salary = e1.basic_pay + x + e1.HRA;

    printf("%f",salary);
    






    return 0;
}