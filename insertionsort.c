//Insertion sort
#include<stdio.h>
int main()
{
int n,temp;
int j=1;
printf("Enter no. of elements in array\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    printf("Enter element %d: \n",i+1);
    scanf("%d",&arr[i]);
}
printf("Array: \n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
while(j<n)
{
    for(int i=j;i>0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
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