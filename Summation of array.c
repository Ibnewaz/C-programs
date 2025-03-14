#include<stdio.h>
int main()
{
    int A[5];
    int B[5];
    int Sum[5];
    int i;
    printf("enter the value of A\n");
    for(i =0 ;i<5; i++){
        scanf("%d", &A[i]);
    }
         printf("enter the value of B\n");
     for(i =0; i<5; i++){
        scanf("%d", &B[i]);
    }

      for(i =0; i<5; i++){
        Sum[i]= A[i] + B[i];}
        printf("Summation of Array\n ");
        for(i =0 ;i <5; i++){
            printf("%d\n",Sum[i]);
        }

}
