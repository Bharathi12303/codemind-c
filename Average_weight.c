#include<stdio.h>
int main()
{
    int average,boy1weight,boy2weight;
    scanf("%d%d%d",&average,&boy1weight,&boy2weight);
    int boy3weight=3*average-boy1weight-boy2weight;
    printf("%d",boy3weight);
} 