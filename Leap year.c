#include<stdio.h>
int main()
{
    int year;
    printf("enter year -");
    scanf("%d",&year);
    if(year%400==0)
    printf("%d",Leap year);
    else if(year%4==0&&year%100!=0)
    printf("%d",Leap year);
    else
    printf("%d",Not Leap year);
    getch();
    return 0;


}
