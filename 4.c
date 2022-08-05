#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two number's ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap Value is %d and %d",a,b);
    return 0;
}