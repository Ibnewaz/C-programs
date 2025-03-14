#include<stdio.h>
int main()
{
    char ch;
    printf("enter a letter :");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("Vowel");
    else
    printf("Consonant");
}
