#include<stdio.h>
int main()
{
    int a,i=2,c=0;
    scanf("%d",&a);
    while(i<a)
    {
        if(a%i==0) 
        {
            c=c+1;
        }
        i++;
    }
    if(c==0) printf("Prime");
    else printf("Not Prime");
}