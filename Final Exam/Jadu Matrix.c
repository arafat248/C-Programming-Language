#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if(r!=c)
    {
        flag=0;
    }
    for(int i=0;i<r;i++)
    {
        if(a[i][r-1-i]!=1)
        {
            flag = 0;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                if(a[0][0]!=1)
                {
                    flag=0;
                }
                if(a[i][j]!=a[0][0])
                {
                    flag=0;
                }
                continue;
            }
            if(i!=j)
            {
                if(j!=r-1-i)
                {
                    if(a[i][j]!=0)
                    {
                        flag=0;
                    }
                }
            }
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
