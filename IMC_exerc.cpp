//A diretiva #include causa a inclus�o de arquivos de cabe�alho contendo
//declara��es necess�rias � compila��o. Os arquivos stdio.h, conio.h e
//math.h declaram, respectivamente, comandos de E/S padr�o, E/S console
//e fun��es matem�ticas. A diretiva #define declara constantes simb�licas.

#include <stdio.h>
#include <conio.h>
#include <math.h>

//#define limite 30
int main(int argc, char** argv) { 

    float peso, altura, imc;
    //clrscr;
    printf("\n Qual seu peso e altura? ");
    scanf("%f %f", &peso, &altura);
    imc = peso/pow(altura,2);
    
    printf("\n Seu IMC �  %1f", imc);
    if (imc <= 30) {
        printf("\n Voc� est� acima do peso! ");
    }
    else    
    {
         printf("\n Voc� est� com o peso correto! ");
     }
     getch();
     
     return 0;
}
