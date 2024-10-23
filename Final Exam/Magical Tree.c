#include <stdio.h>

int main()
{
    int s,n=6,m,k=0;
    scanf("%d",&m);
     int x=n+(m/2);
    s=x-1;
    k=x;

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
       for(int j=s;j<k;j++)
        {
            printf("*");
        }
         s--;
        k=k+1;
          printf("\n");
    }

    int p=(6/2);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<p+2;j++)
        {
            printf(" ");
        }
       for(int j=s;j<m-1;j++)
        {
            printf("*");
        }
         printf("\n");

    }
}
