#include<stdio.h>
int main()
{
    int p,i,fact=1;
    printf("enter any positive number");
    scanf("%d",&p);
    for(i=1; i<=p; i++)
    {
        fact=fact*i;

    }
    printf("%d\n",fact);



}
