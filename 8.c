#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    n&1?printf("%d is Odd",n):printf("%d is Even",n);
    return 0;
}
