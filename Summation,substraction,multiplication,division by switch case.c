#include<stdio.h>
int main()
{
double p,q;
char op;
printf("enter an operator +,-,*,/");
scanf("%c",&op);
printf("enter two numbers:");
scanf("%lf%lf",&p,&q);
switch(op)
{
case'+':
{printf("%lf +%lf=%lf\n",p,q,p+q );}
break;
case'-':
{printf("%lf -%lf =%lf",p,q,p-q );}
break;
case'*':
{printf("%lf *%lf= %lf",p,q,p*q );}
break;
case'/':
{printf("%lf /%lf =%lf",p,q,p/q );}
break;
default:
printf("not a correct value");
}
}
