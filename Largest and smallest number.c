#include<stdio.h>
int main()
{
   int p,q;
   printf("enter 1st number ");
   scanf("%d",&p);
   printf("enter 2nd number ");
   scanf("%d",&q);
   if(p>q)
   printf("Largest number is %d",p);
   else if(p<q)                          //Many times, even after the condition of if is true, the next conditions are checked. Due to which some extra things are shown in the output.//
                                        //That is why else if is used. Then the program ends where the condition is true. The next conditions are not checked.//
   printf("Smallest number is %d",p);
   else
    printf("Numbers are equal");
}
