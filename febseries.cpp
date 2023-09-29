#include<stdio.h>
int main(int argc, char const *argv[])
{
    int terms = 10;
    int t1=0,t2=1;
    int next = t1+t2;
    printf("%d%d%d",t1,t2,next);
    for(int i=3;i<terms;i++)
    {
        t1=t2;
        t2=next;
        next = t1+t2;
        printf("%d", next);
    }
    return 0;
}
