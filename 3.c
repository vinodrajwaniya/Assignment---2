#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two number's ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swap Value is %d and %d",a,b);
    return 0;
}