#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int a,b,c;
    c = 0;
    printf("Menampilkan 5 buah bilangan dalam deret\n\nAwal = ? ");
    scanf("%d", &a);
    printf("increment = ? ");
    scanf("%d", &b);
    printf("Bilangan : \n\n");
    while (c < 5) {
        printf("%d    ", a+(b*c));
        c++;
    }
    getch();
    return 0;
}