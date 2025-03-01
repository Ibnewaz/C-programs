#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=12;i++)
    {

    if(i%3==0)
    continue;//When continue statement works,loop statement will work again.Bypass
    printf("%d\n",i);
    if(i==10)
    break;//If break statement works,loop will stop.
    }




}
