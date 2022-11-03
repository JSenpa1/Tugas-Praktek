#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    float a;
    printf("Cake's price before discount: ");
    scanf("%f", &a);
    printf("Cake's price after discount: %f", a - (a*0.18));
    getch();
    return 0;
}