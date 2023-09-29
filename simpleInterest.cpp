#include<stdio.h>
int main(int argc, char const *argv[])
{
    // variable declaration
    int principle, rate, period,si;

    // accepting input
    printf("\nenter priciple ammount");
    scanf("%d",&principle);
    printf("\nEnter rate");
    scanf("%d",&rate);
    printf("\nEnter no of years ");
    scanf("%d",&period);

    // calculate interest
    si = (principle*rate*period)/100;

    // output
    printf("\nIntersted earned = %d",si);
    printf("\nTotalamount = %d",si+principle);
    return 0;
}
