#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m;
        scanf("%d",&m);
        int a[m],b[m],c[m];
        for(int i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<m;i++)
        {
            b[i]=a[i];
        }
        for(int i=0;i<m-1;i++)
        {
            for(int j=1+i;j<m;j++)
            {
                if(b[i]>b[j])
                {
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            c[i]=a[i]-b[i];
        }
        for(int i=0;i<m;i++)
        {
            if(0<=c[i] && c[i]<=1000)
            {
                printf("%d ",c[i]);
            }
            else
            {
                printf("%d ",c[i]*(-1));
            }
        }
        printf("\n");
    }
    return 0;
}
