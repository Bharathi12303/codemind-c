#include<stdio.h>
#include<math.h>
int main()
{
    int a,min,hr;
    scanf("%d",&a);
    hr=a/60,min=a%60;
    printf("%d Hour(s) %d Minute(s)",hr,min);
}