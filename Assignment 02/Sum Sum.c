#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int sum=0,odd=0;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++)
    {
    scanf("%d",&ar[i]);
    }
    for(i=1;i<=n;i++)
    {
    if(ar[i]>0)
    {
    sum=sum+ar[i];
    }
    else
    {
    odd=odd+ar[i];
    }
    }
    printf("%d %d",sum,odd);
    return 0;
}
