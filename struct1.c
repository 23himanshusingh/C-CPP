# include <stdio.h>
# include <stdlib.h>
# include <string.h>
struct personal{
    char name[50];
    char date_of_joining[50];
    int salary;
};
int main(){
    struct personal p[5];
    for (int i=0;i<5;i++){
        printf("Enter details of employee %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",p[i].name);
        printf("Enter date of joining: ");
        scanf("%s",p[i].date_of_joining);
        printf("Enter salary: ");
        scanf("%d",&p[i].salary);
    }
    for (int i=0;i<5;i++){
        printf("\nDetails of employee %d\n",i+1);
        printf("Name: %s\n",p[i].name);
        printf("Date of joining: %s\n",p[i].date_of_joining);
        printf("Salary: %d\n",p[i].salary);
    }
    return 0;

}