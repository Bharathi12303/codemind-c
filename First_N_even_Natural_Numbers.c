#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    i=2*a;
    while(i>=1)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        i--;
    }
}