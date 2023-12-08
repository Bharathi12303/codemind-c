#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    while(a!=0)
    {
        int r=a%10;
        c=c+1;
        a=a/10;
    }
    printf("%d",c);
}