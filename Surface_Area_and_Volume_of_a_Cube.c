#include<stdio.h>
#include<math.h>
int main()
{
    int s,area,volume;
    scanf("%d",&s);
    area=6*pow(s,2);
    volume=pow(s,3);
    printf("Surface area = %d and Volume = %d",area,volume);
}