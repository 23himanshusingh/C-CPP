
void recurPermute(char*str,int n,,int freq[],char *ds,int k){
    if(ds.size()==n){
        k=0;
        return;
    }
    for(int i=0;i<n;i++){
        if(!freq[i]){
            ds.[k++]=str[i];
            recurPermute(str,n,freq,ds);
            freq[i]++;
            ds.pop_back();
        }
    }



}
int main(){
    char *str;
    int n;
    scanf("%d",&n);
    str=malloc(sizeof(char)*n);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    int freq[n]={0};char *ds;
    ds=(char *)malloc(sizeof(char)*n);
    recurPermute(str,n,freq,ds,0);


    
}
