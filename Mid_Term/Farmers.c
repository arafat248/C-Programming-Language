#include<stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);
    int n=(m1+m2);
    int m= (d*m1) / n;
    int day=d-m;
    printf("%d\n",day);
    }
    return 0;
}
