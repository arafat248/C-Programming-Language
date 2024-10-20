#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        long long int m;
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        long long int d=m/(a*b*c);
        if(a==0||b==0||c==0||m==0)
        {
            printf("0\n");
        }
        else if(a*b*c*d==m)
        {
            printf("%lld\n",d);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
