#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    float a;
    printf("Cake's price after discount: ");
    scanf("%f", &a);
    printf("Cake's price before discount: %f", (a*100)/82);
    getch();
    return 0;
}