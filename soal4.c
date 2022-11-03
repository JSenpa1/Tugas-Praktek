#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    int a,b,c;
    printf("FINAL SCORE");
    printf("\n\nAssignment = ");
    scanf("%d", &a);
    printf("Midtest = ");
    scanf("%d", &b);
    printf("Finaltest = ");
    scanf("%d", &c);
    printf("\nFinal Score = %f", (a*0.3) + (b*0.3) + (c*0.4)); 
    getch();
    return 0;
}