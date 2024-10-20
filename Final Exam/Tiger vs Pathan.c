#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

    char s[100001];
    scanf("%s",&s);
    int tiger=0,pathaan=0;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='T')
    {
     tiger++;
    }
    else if(s[i]=='P')
    {
        pathaan++;
    }
    }
    if(tiger>pathaan)
    {
        printf("Tiger\n");
    }
     else if(tiger<pathaan)
     {
         printf("Pathaan\n");
     }
     else
     {
         printf("Draw\n");
     }
    }
    return 0;
}
