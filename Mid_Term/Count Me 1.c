#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
    scanf("%lld",&ar[i]);
    }
    int coun =0,count=0;
    for(int i=0;i<n;i++)
    {
    if (ar[i]%2==0 )
    {
    coun++;
    }
    else if (ar[i]%3==0)
    {
    count++;
    }
    }
    printf("%d %d",coun,count);
    return 0;
}
