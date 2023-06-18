int tag;
int* factors(int n)
{
    int a[1000000];
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            a[++tag]=i;
    a[++tag]=n;
    return(a);
}