#include<stdio.h>

int main()
{
    int d,n,k;
    printf("Entet an number ");
    scanf("%d",&n);
    printf("Enter an digit ");
    scanf("%d",&d);
    k=n*10;
    n=k+d;
    printf("New Number is %d",n);
    return 0;
}