#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=2;i++){
        printf("outer loop start\n");
        for(j=1;j<=3;j++){
        printf("inner loop\n");
        }
        printf("outer loop end\n");
    }

}
