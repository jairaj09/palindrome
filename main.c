#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[40], ch;
    int i=0,len=0,j=0;
    printf("Enter the string : ");
    scanf("%s",&str);
    len=strlen(str);
    for(i=0;i<=len;i++)
    {
       if(str[i] != str[len-i-1])
          {
              j=1;
              break;
          }
    }
       if (j==0) {
        printf("String is a palindrome");
    }
    else {
        printf("String is not a palindrome");
    }

    return 0;
}
