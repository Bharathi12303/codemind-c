#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    scanf("%f",&bs);
    if(bs<=10000)
    {
    da=bs*0.8,hra=bs*0.2;
    }
    else if(bs<=20000)
    {
        da=0.9*bs,hra=0.25*bs;
    }
    else
    {
        da=0.95*bs,hra=bs*0.3;
    }
    gs=bs+da+hra;
    printf("%.2f",gs);
}