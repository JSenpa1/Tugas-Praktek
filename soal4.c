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
    printf("\nFinal Score = %d", ((a*3)/10) + ((b*3)/10) + ((c*4)/10)); 
    getch();
    return 0;
}