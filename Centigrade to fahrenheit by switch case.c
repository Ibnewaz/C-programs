#include<stdio.h>
int main()
{
   int choice;
   float temp,P;
   printf("Temperature conversion menu\n");
   printf("1.Fahrenheit to Centigrade\n");
   printf("2.Centigrade to Fahrenheit\n");
   printf("enter you choice");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
    {    printf("enter the Fahrenheit temperature:");
    scanf("%f",&temp);
    P=(temp-32)/1.8;
       printf("the temperature is :%f",P);
       break;

        case 2:
    {    printf("enter the Centigrade temperature:");
    scanf("%f",&temp);
       P=(1.8*temp)+32;
       printf("the temperature is :%f",P);
        default:
        printf("not a correct option");




    }
   }


}
}
