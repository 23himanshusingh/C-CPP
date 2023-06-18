#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 6
struct Tata_IPL{
    char player_name[50];
    char team_name[50];
    float batting_average;
};
void sort_by_team_name(struct Tata_IPL *arr,int len){
    int i,j;struct Tata_IPL temp;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(strcmp(arr[i].team_name,arr[j].team_name)>0)
            {
                strcpy(temp.player_name,arr[i].player_name);
                strcpy(arr[i].player_name,arr[j].player_name);
                strcpy(arr[j].player_name,temp.player_name);

                strcpy(temp.team_name,arr[i].team_name);
                strcpy(arr[i].team_name,arr[j].team_name);
                strcpy(arr[j].team_name,temp.team_name);

                temp.batting_average=arr[i].batting_average;
                arr[i].batting_average=arr[j].batting_average;
                arr[j].batting_average=temp.batting_average;
            }
        }
    }
}



int main(){
    struct Tata_IPL player[N];
    for (int i=0;i<N;i++){
        printf("Enter details of player %d\n",i+1);
        printf("Enter player name: ");
        scanf("%s",player[i].player_name);
        printf("Enter team name: ");
        scanf("%s",player[i].team_name);
        printf("Enter batting average: ");
        scanf("%f",&player[i].batting_average);
    }
    
    sort_by_team_name(player,N);
    for (int i=0;i<N;i++){
        printf("Player name: %s  ",player[i].player_name);
        printf("Team name: %s  ",player[i].team_name);
        printf("Batting average: %f  ",player[i].batting_average);
        printf("\n");
    }
    return 0;

}