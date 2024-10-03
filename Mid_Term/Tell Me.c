#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    long long int n;
    scanf("%lld",&n);
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
    scanf("%lld",&ar[i]);
    }
    long long int x;
    scanf("%lld",&x);
    int count=0;
    for(int i=0;i<n;i++)
    {
    if(ar[i]==x)
    {
    count=1;
    break;
    }
    }
    if(count)
    {
    printf("YES\n");
    }
    else
    {
    printf("NO\n");
    }
    }
    return 0;
}
