#include<stdio.h>
int main()
{
    int p,q,r;
    printf("enter three numbers :");
    scanf("%d%d%d",&p,&q,&r);

    if(p>q&&p>r)
    printf("large number=%d",p);
    else if(q>p&&q>r)
    printf("large number=%d",q);
    else if(r>p&&r>q)
    printf("large number=%d",r);

    else
    printf("numbers are equal");
}


