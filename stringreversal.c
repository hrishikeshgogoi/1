#include<stdio.h>
#include<string.h>
int main()
{
    int i,a;
    char arr[100];
    printf("Enter string\n");
    scanf("%s",arr);
    a=strlen(arr);
    char brr[a];
    for(i=a-1;i>=0;i--)
    brr[a-1-i]=arr[i];
    for(i=0;i<a;i++)
    printf("%c",brr[i]);
    printf("\n");
    return 0;
}