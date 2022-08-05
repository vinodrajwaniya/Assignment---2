#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter an number ");
    scanf("%d",&n);
    k=n%10;
    n=(n-k)/10;
    printf("New Digit is %d",n);
    return 0;
}