#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    float a, b;
    printf("MENGHITUNG LUAS SEGITIGA");
    printf("\n\nalas = ");
    scanf("%f", &a);
    printf("tinggi = ");
    scanf("%f", &b);
    printf("Luas Segitiga = %f", (a*b)/2);
    getch();
    return 0;
}