#include<stdio.h>
int main()
{
    int units;
    float bill_Amount;
    printf("Enter the number of units consumed:");
    scanf("%d",&units);
    if(units<=100)
    {
        bill_Amount=units*5.0;
    }
    else if(units<=200)
    {
        bill_Amount=units*7.0;
    }
    else if(units<=300)
    {
        bill_Amount=units*10.0;
    }
    else
    {
        bill_Amount=units*15.0;
    }
    printf("Estimated Electricity Bill = Rs. %.2f\n", bill_Amount);
    return 0;
}