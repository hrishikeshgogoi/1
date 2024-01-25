//Evaluate a polynomial//
#include<stdio.h>
float Evaluate(float p[], int n, int d)
{
    int i;
    float pow=d,s=p[0];
    for(i=1;i<=n;i++)
    {
        s=s+p[i]*pow;
        pow=pow*d;
    }
    return s;
}
int main()
{
    int i,d;
    float c;
    printf("Enter degree\n");
    scanf("%d",&d);
    float a[d+1];
    printf("Enter constants\n");
    for(i=0;i<=d;i++)
    {
    scanf("%f",&a[i]);
    }
    printf("Enter value of x\n");
    scanf("%f",&c);
    float b= Evaluate(a, d, c);
    printf("%f",b);
}