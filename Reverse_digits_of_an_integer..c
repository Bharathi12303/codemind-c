#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    while(a>0)
    {
        i=a%10;
        s=s*10+i;
        a=a/10;
    }
    printf("%d",s);
}