//�Dados tr�s n�meros verificar se eles podem representar as
//medidas dos lados de um tri�ngulo e, se puderem, classificar o tri�ngulo em
//equil�tero, is�sceles ou escaleno�.

#include <stdio.h>
#include <conio.h>

int main(int argc, char** argv) {
	
float a, b, c;
//clrscr();
printf("\nInforme tr�s n�meros: ");
scanf("%f %f %f", &a, &b, &c);
if( a<b+c && b<a+c && c<a+b ) {
printf("\n� um tri�ngulo: ");
if( a==b && b==c ) printf("equil�tero");
else if( a==b || a==c || b==c ) printf("is�sceles");
else printf("escaleno");
}
else printf("\nN�o � um tri�ngulo");
getch();

return 0;
}
