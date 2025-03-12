#include<stdio.h>
int main()
{
    int p,q,large;
    printf("enter two numbers ");
    scanf("%d%d",&p,&q);
    large=p>q?p:q;
    printf("large number is %d",large);


}
