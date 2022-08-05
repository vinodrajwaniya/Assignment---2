#include<stdio.h>

int main()
{
    int n,k,s=0;
    printf("Enter three digit no. ");
    scanf("%d",&n);
    while (n!=0)
    {
         k=n%10;
         s=s+k;
         n=n/10;
    }
    
   
    printf("Sum of digit is %d",s);
    return 0;
}