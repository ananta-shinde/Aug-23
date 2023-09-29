#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p = 1000,r = 20, n = 5;
    float si;

    si = p*r*n/100;

    printf("Intrest earned :%f\n",si);
    printf("Amout :%f\n",p+si);


    return 0;
}
