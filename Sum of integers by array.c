#include<stdio.h>
 main()
{
    int a[10],i,sum=0;
    printf("enter the values of array");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        sum=sum+a[i];
    }
    printf("sum of the array %d",sum);
}
