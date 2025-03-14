#include<stdio.h>
int main()
{
    int a[5],i,even_sum =0,odd_sum=0;
     printf(" Values of Array");
    for(i =0;i<5;i++){
        scanf("%d",&a[i]);

    }

       for(i=0;i<5;i++){
        printf(" %d", a[i]);
        if(a[i]%2==0)
            even_sum=even_sum + a[i];

        else
            odd_sum=odd_sum+a[i];

       }
       printf("\n sum of even values %d\n",even_sum);
       printf("\n sum of odd values %d\n",odd_sum);
}

