#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],r1,r2,c1,c2,i,j,k,sum=0;
    printf(" enter rows and columns for matrix A =");
    scanf("%d %d",&r1,&c1);
    printf(" enter rows and columns for matrix B =");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("\n column of matrix A is not equal to row of matrix B\n");

        printf("\n enter rows and columns for matrix A = ");
        scanf("%d %d", &r1, &c1);

        printf("\n enter rows and columns for matrix B = ");
        scanf("%d %d", &r2, &c2);

    }
    //taking input for matrix A//
    printf("\n enter elements of matrix A\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf(" A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //taking input for matrix B//
    printf("\n enter elements of matrix B\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);


        }
    }
    //multiplying matrix//
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            sum=0;
            for(k=0; k<c1; k++)

            {
                sum= sum + A[i][k] * B[k][j];
            }
            C[i][j]=sum;


        }
    }
    //printing matrix A//
    printf("\n\n matrix A\n\n=");
    for(i=0; i<r1; i++)
    {


        for(j=0; j<c1; j++)
        {



            printf(" %d ",A[i][j]);
        }
        printf("\n");



    }

    //printing matrix B//
    printf("\n\n matrix B\n\n");
    for(i=0; i<r2; i++)
    {


        for(j=0; j<c2; j++)
        {


            printf(" %d ",B[i][j]);
        }
        printf("\n");



    }

    //printing result matrix//
    printf("\n\n matrixC\n\n ");
    for(i=0; i<r1; i++)
    {


        for(j=0; j<c2; j++)
        {

            printf(" %d ",C[i][j]);
        }
        printf("\n");


    }

}

