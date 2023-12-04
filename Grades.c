#include<stdio.h>
int main()
{
    int phy,che,bio,mat,cs;
    scanf("%d%d%d%d%d",&phy,&che,&bio,&mat,&cs);
    float percentage=(phy+che+bio+mat+cs)/5;
    if(percentage>=90) printf("Grade A");
    else if(percentage>=80) printf("Grade B");
    else if(percentage>=70) printf("Grade C");
    else if(percentage>=60) printf("Grade D");
    else if(percentage>=40) printf("Grade E");
    else printf("Grade F");
}