#include<stdio.h>
int main()
{
    int a,s=0,i;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}