// �Numa empresa paga-se R$ 19,50 a hora e 
//recolhe-se para o imposto de renda 10% dos
//sal�rios acima de R$ 1500,00. Dado o n�mero de horas trabalhadas por um
//funcion�rio, informar o valor do seu sal�rio l�quido�.

#include <stdio.h>
#include <conio.h>
int main(int argc, char** argv) {
	
int h;
float s;
//clrscr();
printf("\nHoras trabalhadas? ");
scanf("%d", &h);
s = h*19.50;
if( s>1500.00 )
s = 0.90*s;
printf("\nSal�rio l�quido: R$ %.2f", s);
getch();

return 0;
}
// o else pode ser omitido sem problema
