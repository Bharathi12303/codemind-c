#include<stdio.h>
int main()
{
    int x,s=0,r,t;
    scanf("%d",&x);
    t=x;
    while(x!=0)
    {
      r=x%10;
      s=s*10+r;
      x=x/10;
    }
    
    
    if(s==t) printf("Palindrome");
    else printf("Not Palindrome");
    
}