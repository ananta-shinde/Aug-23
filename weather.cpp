#include<stdio.h>
int main(int argc, char const *argv[])
{
    float mon, tue, wed, thu, fri, sat, sun;
    printf("Enter temp for a week :");
    scanf("%f%f%f%f%f%f%f",&mon,&tue,&wed,&thu,&fri,&sat,&sun);

    // average temp of a week
    printf("%f\n", (mon+tue+wed+thu+fri+sat+sun)/7);
    // hotest day of the week
    if(mon > tue && mon> wed && mon >thu && mon > fri && mon >sat && mon >sun)
    printf("Monday is the hottest day, temp : %f",mon);
    if(tue > mon && tue> wed && tue >thu && tue > fri && tue >sat && tue >sun)
    printf("Tue is the hottest day, temp : %f",tue);
    // coolest day of the week
    return 0;
}
