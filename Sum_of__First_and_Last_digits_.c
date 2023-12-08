#include<stdio.h>
int main(){
    int n,a,t,s=0;
    scanf("%d",&a);
    t=a%10;
    while(a!=0)
    {
    	int r=a%10;
        s=s*10+r;
        a/=10;
    }
    n=s%10;
    printf("%d",n+t);
}