//  strcmp

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20] = "Hello";
    char str2[20] = "hello";
    if(strcmp(str1,str2) == 0)
    {
        printf("\n Two Strings are equal");
    }
    else{
        printf("\n Two Strings are not equal.");
    }
}
