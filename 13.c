#include<stdio.h>

int main()
{
    int n,k,p;
    printf("Enter three digit no. ");
    scanf("%d",&n);
    k=n%10;
    p=(n-k)/10;
    n=(k*100)+p;
    printf("Change value is %d",n);
    return 0;
}