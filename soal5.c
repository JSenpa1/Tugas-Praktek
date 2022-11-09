#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    float a, PI;
    PI = 3.14;
    printf("CALCULATE VOLUME OF SPHERE\n\nRadius (meter) ? ");
    scanf("%f", &a);
    printf("Volume = %.3f", (4.0/3.0)*PI*(a*a*a));
    getch();
    return 0;
}   