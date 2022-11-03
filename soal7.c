#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    float a,b;
    printf("HARGA BUAH\n\nHarga perkilo = AUD ");
    scanf("%f", &a);
    printf("berat buah = ");
    scanf("%f", &b);
    printf("Harga = AUD %f", a*b);
    getch();
    return 0;
}