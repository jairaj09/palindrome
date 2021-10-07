#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , a=0 , b=0 ;
    printf("Enter the number to check : ");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        a=a*10 + n%10;
        n=n/10;
    };
    if(a==b)
    {
        printf("The number is a pelindrome.");
    }
    else
    {
        printf("The number is not a pelindrome");
    }
    return 0;
}
