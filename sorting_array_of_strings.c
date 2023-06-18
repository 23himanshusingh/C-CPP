#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>



int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);}


int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b,a);}

int distinct_characters(const char* a) {
    int count[26]={0};
    int i;
    for (i=0;i<strlen(a);i++){
        count[*(a+i)-'a']++;
    }
    int dis=0;
    for (i=0;i<26;i++){
        if (count[i]!=0){
            dis++;
        }
    }
    return dis;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int dis_a=distinct_characters(a);
    int dis_b=distinct_characters(b);
    if (dis_a==dis_b){
        return lexicographic_sort(a,b);
    }
    else{
        return dis_a-dis_b;
    }
}
int sort_by_length(const char* a, const char* b) {
    if (strlen(a)>strlen(b)){
        return 1;
    }
    else if (strlen(a)<strlen(b)){
        return -1;
    }
    else{
        return lexicographic_sort(a,b);
    }

}
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i,j;
    for (i=0;i<len;i++){
        for (j=i+1;j<len;j++){
            if (cmp_func(arr[i],arr[j])>0){
                char*temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
    //calling procedures for various sorting
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}




