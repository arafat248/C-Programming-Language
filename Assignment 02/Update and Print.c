#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,n,x,v;
    scanf("%d",&n);
    int  ar[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&ar[i]);
    }
    scanf("%d %d",&x,&v);
    ar[x]=v;
    for(i=n-1;i>=0;i--) 
    {
    printf("%d ",ar[i]);
    }
    return 0;
}
