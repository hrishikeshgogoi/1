//Bubble sort
#include<stdio.h>
int main()
{
int n,temp;
int j=0;
printf("Enter no. of elements in the array\n");
scanf("%d",&n);
int last=n;
int arr[n];
for(int i=0;i<n;i++)
{
    printf("Enter element %d: \n",i+1);
    scanf("%d",&arr[i]);
}
printf("Array:\n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
while(0<last-1)
{
    for(j=0;j<last-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    last--;
}
printf("Sorted array:\n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
return 0;
}