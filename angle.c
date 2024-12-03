#include<stdio.h>

void main()
{
    float a,b=90,c;

    printf("\n enter first angle:%.1f",b);
    printf("\n enter second angle:");
    scanf("%f",&c);

    a=180.0-(b+c);

    printf("\n the third agle of triagle is :%.1f",a);
}