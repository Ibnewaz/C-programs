#include<stdio.h>
int main()

{double a,b,c,s,area;
printf("enter 3 values : ");
scanf("%lf%lf%lf",&a,&b,&c);
s=(a+b+c)/2;
area = sqrt((s-a)*(s-b)*(s-c));
printf("area of triangle :%lf",area);
}
