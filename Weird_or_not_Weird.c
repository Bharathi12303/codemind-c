#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0) printf("weird");
    if(n%2==0 && n<=5 && n>=2) printf("not weird");
    else if(n%2==0 && n<=20 && n>=6) printf("weird");
    else if(n%2==0 && n>20) printf("not weird");
}