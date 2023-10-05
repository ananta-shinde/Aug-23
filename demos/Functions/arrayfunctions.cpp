#include<stdio.h>


#include"array.h"
const int pi = 3.14;
int main(int argc, char const *argv[])
{
    int num[5] = {20,24,45,52,12};
    int temp[5] = {20,45,78,45,56};
    
    printArray(num);
    sortArray(num);
    printArray(num);
    
    return 0;
}
