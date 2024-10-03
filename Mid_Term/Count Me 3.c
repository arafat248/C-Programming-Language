#include<stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    { 
    int capitalcount=0,smallcount=0,digitcount=0;
    char s[100001];
    scanf("%s",s); 
    for (int j=0;s[j]!='\0';j++) 
    {
    if (s[j]>='A' && s[j]<='Z') 
    {
    capitalcount++;
    } 
    else if (s[j]>='a' && s[j]<='z')
    {
    smallcount++;
    } 
    else if (s[j]>='0' && s[j]<='9')
    { 
    digitcount++;
    }
    }
    printf("%d %d %d\n",capitalcount,smallcount,digitcount);
    }
    return 0;
}
