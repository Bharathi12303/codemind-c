#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d",&x,&y);
    z=x-y,a=y-x;
    if(x>y) printf("%d",z);
else printf("%d",a);    
}