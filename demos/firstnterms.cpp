#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    int terms = 10;
    int cout = 0;
    while(cout < terms)
    {
        if(i%2 == 0)
        {
             printf("%d",i);
             cout++;
        }
        i++;
    }
    return 0;
}
