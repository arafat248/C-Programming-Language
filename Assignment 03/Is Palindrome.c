#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) 
{
    int len=strlen(s);
    for (int i=0;i<len/2;i++) 
    {
        if (s[i]!=s[len-i-1]) 
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    char s[1001];
    scanf("%s",s);
    if (is_palindrome(s)) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
