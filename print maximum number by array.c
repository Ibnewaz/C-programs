#include<stdio.h>
int main()
{
    int a[7]= {100,-50,105,25,145,-78,500};

int max =a[0],i;

for(i=1; i<7; i++)
{
if(a[i]>max)
        max=a[i];
}
printf("maximum value is %d",max);
}
