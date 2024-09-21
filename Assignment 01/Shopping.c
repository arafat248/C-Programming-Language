#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int N;
scanf("%d",&N);
if(N>1000 && N<1500)
printf("I will buy Punjabi");
else if(N>=1500)
printf("I will buy Punjabi\n""I will buy new shoes\n""Alisa will buy new shoes");
else
{
printf("Bad luck!");
}
    return 0;
}
