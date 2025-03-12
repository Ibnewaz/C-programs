#include<stdio.h>
int main()
{
int marks;
printf("enter marks:");
scanf("%d",&marks);
switch(marks)
{
case 80 ...100:
printf("A+");
break;
case 70 ...79:
printf("A");
break;
case 60 ...69:
printf("A-");
break;
case 50 ...59:
printf("B");
break;
case 40 ...49:
printf("C");
break;
case 33 ...39:
printf("D");
break;
default:
printf("F");
}
}
