#include<stdio.h>
int main()
{
    int i,p,count=0;
    printf("enter any number");
    scanf("%d",&p);
    for(i=2; i<p; i++)

    {
        if(p%i==0)
        {
            count++;
            break;


        }

    }
    if(count==0)

        printf("prime number");

    else
        printf("not prime");



}
