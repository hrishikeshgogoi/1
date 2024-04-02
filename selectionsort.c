//Selection sort
#include<stdio.h>
int main()
{
int n,temp;
int j=0;
printf("Enter no. of elements in array\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    printf("Enter element %d:\n",i+1);
    scanf("%d",&arr[i]);
}
printf("Array is: \n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
while(j<n)
{
    for(int i=j+1;i<n;i++)
    {
        if(arr[j]>arr[i])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    j++;
}
printf("Sorted array: \n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
return 0;
}