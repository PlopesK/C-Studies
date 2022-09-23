//Matriz
#include <stdio.h> 
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
//"Bibliotecas" que eu adicionei, normalmente eu uso sempre a mesma forma��o pra n�o me preocupar em ter que alterar isso
//Sendo os comandos principais para o funcionamento do programa

/*  A Matriz que eu elaborei foi bem sem criatividade, sendo ela:
Existem 3 Matrizes, onde a Matriz A ser� definida pelo usu�rio
a Matriz B ser� a Soma da Matriz A com 20
e a Matriz C ser� a Soma de A com B, dividida por 2;

A cadeia de valores � de 3 Linhas e 3 Colunas

PS: Eu queria adicionar de alguma maneira o sistema de deixar em Portugu�s, mas por algum motivo nunca funciona
ent�o por isso eu nunca uso (Solu��es r�pidas para problemas que eu n�o sei onde est�o :D)
*/

int main()
{
	//-------------Dados-------------//
	
	int A[3][3], B[3][3]; /* O valor dentre as colchetes (3 e 2) s�o utilizados para espec�ficar o tamanho da Matriz 
						  (nesse caso 4 Linhas e 5 Colunas) */
						  
	float C[4][3];	    /*se eu n�o espec�ficar direito nisso, o programa n�o ir� funcionar.
						Por algum motivo desconhecido, o programa no C n�o mostrava a terceira Linha,
						ent�o tive que botar "4" nas linhas do valor C para funcionar; */
						
	int i, j, c, r;			//"i" e "j" s�o utilizados como contadores, 
	
	char m[3];				//"m", "c" e "r" s�o para um Extra.
	
	/* Todo valor Inteiro � colocado como "int", sendo "float" algo mais vari�vel 
	(j� que com INT n�o � poss�vel realizar divis�o, eu utilizei FLOAT no valor da Matriz C).
	"Char" serve para ler Letras, precisando desse valor entre colchetes para se transformar em um "ConstantChar"
	cujo eu utilizarei para uma parte do meu programa
	*/
	
	
	//-------------In�cio-------------//
	
	system ("color 09"); //Corzinha pra deixar o sistema bunitin.
	
	
	//__________Matriz A__________//
	printf ("\n ______Matriz A______\n");
	for (i=1; i<=3; i++) /* In�cio da contagem, come�ando pelas Linhas; 
						 sendo "For" utilizado parta definir um valor para contar at� um outro valor espec�ficado 
						 (Nesse caso, o valor espec�ficado � "4")*/
	{
		
		printf ("\n <////////////////> \n"); //Divis�o pra deixar bonitin no sistema
		
		for (j=1; j<=3; j++) //Contagem das Colunas
		{
			printf ("\n Entre com o valor presente na linha %d coluna %d da Matriz A: ", i, j);
			scanf ("%d", &A[i][j]);
			
			/* "Printf" � utilizado para realizar um coment�rio ao programa
			"Scanf" � utilizado para ler um valor que est� dentro de um coment�rio,
			sendo o "d" espec�ficado para anotar valores Decimais (Caso colocasse algum valor sem ser um n�mero para scanear, o programa daria erro);
			logo ele anotaria Valores Decimais � Matriz A dentro da contagem de "i" e "j";
			*/
		}
	}
	
	printf ("\n"); //Apenas um spacin pra deixar mais bonitin
	system ("pause"); //Pausa o programa para apenas progredir na pr�xima tecla apertada
	system ("cls"); //Troca a janela do programa, deixando ele mais limpo e organizado
	
	
	//__________Matriz B__________//
	printf ("\n ______Matriz B______");
	for (i=1; i<=3; i++)
	{
		printf ("\n\n <////////////////> \n");
		
		for (j=1; j<=3; j++)
		{
			B[i][j] = A[i][j] + 20;
			
			printf ("\n O valor da linha %d da coluna %d na Matriz B eh: %d", i, j, B[i][j]);
			
			/* Comentando agora, mesmo que eu j� utilizei isso antes nesse programna
			Esses valores de "PORCENTAGEM+D" servem para demonstrar o valor espec�ficado (No caso, os valores de 'i', 'j' e 'B');
			Al�m disso, o "\n" � utilizado para Pular uma linha, deixando o programa mais organizado */
		}
	}
	
	printf ("\n\n");
	system ("pause");
	system ("cls");
	
	
	//__________Matriz C__________//
	printf ("\n ______Matriz C______");
	for (i=1; i<=3; i++)
	{
		printf ("\n\n <////////////////> \n");
		
		for (j=1; j<=3; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			
			printf ("\n O valor da linha %d da coluna %d na Matriz C eh: %.2f", i, j, C[i][j]/2);
			// Nesse caso h� algo de difenrente, o "PORCENTAGEM+F" � para indicar valores do tipo Float
		}
	}
	
	printf ("\n\n");
	system ("pause");
	system ("cls");
	
	//-------------Menu-------------//
	//Adicionei um sistema de menu porque n�o queria deixar o programa t�o simplezin
	system ("color 05");
	
	printf ("\n Voce deseja visualizar alguma Matriz? (Digite 'Sim' ou 'Nao' como resposta)");
	printf ("\n ");
	scanf ("%s", &m);
	
	/* O Scanf para string usa "PORCENTAGEM+S" */
	//__________Caso Sim__________//
	if (strcmp(m,"Sim") == 0 || strcmp(m,"sim") == 0)
	{
		/* Explica��ozinha r�pida sobre o IF:
		O "If" � utilizado para encontrar casos dentro do programa, onde ele realizar�
		a��es caso as condi��es sejam validadas.
		No caso, eu utilizo o c�digo de "Strcmp", onde ele serve para localizar Caracteres dentro do programa
		sendo que se for "==0" � para caso for IGUAL ao valor e se for "==1" para caso for DIFERENTE.
		O "||" equivale a um "OU".
		O motivo de eu escrever a senten�a em Mai�sculo e Min�sculo � por pregui�a de sempre escrever em Mai�sculo
		a primeira letra e o resto em Min�sculo :)
		*/
		
		r = 1; //Especifica��o necess�ria pro comando "While" funcionar
		while (r == 1)
		{
			/* Explica��ozinha sobre o WHILE:
			O "While" � utilizado para realizar a��es constantes ENQUANTO (Literalmente a tradu��o de "While" para o Portugu�s)
			as especifica��es presentes dentro do par�nteses forem verdadeiras.
			Caso alguma especifica��o for encontrada como falsa, o c�digo do "while" ir� parar de rodar e prosseguir
			pro pr�ximo comando
			Nesse casoeu usei para a confec��o do menu, por�m ele n�o era necessariamente obrigat�rio.*/
			
			system ("cls");
			system ("color 03");
			
			printf ("\n O que voce deseja visualizar? (Digite o Valor do codigo para validar a acao) \n");	
			printf ("\n Codigo ");
			printf ("\n   01 - Visualizar apenas a Matriz A");
			printf ("\n   02 - Visualizar apenas a Matriz B");
			printf ("\n   03 - Visualizar apenas a Matriz C");
			printf ("\n   04 - Visualizar Todas as Matrizes");
			printf ("\n   00 - Encerrar o Programa");
			printf ("\n ----------------------------------------");
			printf ("\n   ");
			scanf ("%d", &c);
			
			//-_-_-_-_-C�digo 1-_-_-_-_-//
			if (c == 01 || c == 1)
			{
				// Caso IF do C�digo ser igual a 1
				
				system ("cls");
				
				printf ("\n -_-_-_-_-Matriz A-_-_-_-_-"); //T�tulo
				
				for (i=1; i<=3; i++)
				{
					printf ("\n\n <////////////////> \n"); //Enfeitin
					
					for (j=1; j<=3; j++)
					{
						printf ("\n O valor da linha %d da coluna %d na Matriz A eh: %d", i, j, A[i][j]);
						//Parte onde eu coloco para exibir as Matrizes A
						
					}
				}
				
				printf ("\n\n Deseja voltar ao Menu?"); //Perguntando se desejo voltar ao menu ou encerrar o programa.
														//Sendo consideravelmente um "Menu2".
				printf ("\n (Digite '1' para Sim)");
				printf ("\n (Digite '2' para Nao)");
				printf ("\n  ");
				scanf ("%d", &r);
				//Aqui onde vemos o "While" em a��o, pois caso o usu�rio coloque qualquer valor diferente de "1", o programa ir� finalizar
			}
			
			//-_-_-_-_-C�digo 2-_-_-_-_-//
			if (c == 02 || c == 2)
			{
				// Caso IF do C�digo ser igual a 2
				// Todos os "Ifs" dos c�digos seguem o mesmo padr�o
				
				system ("cls");
				
				printf ("\n -_-_-_-_-Matriz B-_-_-_-_-");
				
				for (i=1; i<=3; i++)
				{
					printf ("\n\n <////////////////> \n");
					
					for (j=1; j<=3; j++)
					{
						printf ("\n O valor da linha %d da coluna %d na Matriz B eh: %d", i, j, B[i][j]);
						
					}
				}
				
				printf ("\n\n Deseja voltar ao Menu?");
				printf ("\n (Digite '1' para Sim)");
				printf ("\n (Digite '2' para Nao)");
				printf ("\n  ");
				scanf ("%d", &r);
			}
			
			//-_-_-_-_-C�digo 3-_-_-_-_-//
			if (c == 03 || c == 3)
			{
				// Caso IF do C�digo ser igual a 3
				
				system ("cls");
				
				printf ("\n -_-_-_-_-Matriz C-_-_-_-_-");
				
				for (i=1; i<=3; i++)
				{
					printf ("\n\n <////////////////> \n");
					
					for (j=1; j<=3; j++)
					{
						C[i][j] = A[i][j] + B[i][j];
						/* Tive que colocar essa conta aqui tamb�m, por causa de que um erro que me assombra a muito tempo me atacou >:(
						O �ltimo valor tava vindo zerado, mas por algum motivo que eu n�o sei,
						foi s� eu recolocar essa conta aqui e funcionou */
						
						printf ("\n O valor da linha %d da coluna %d na Matriz C eh: %.2f", i, j, C[i][j]/2);
					}
				}
				
				printf ("\n\n Deseja voltar ao Menu?");
				printf ("\n (Digite '1' para Sim)");
				printf ("\n (Digite '2' para Nao)");
				printf ("\n  ");
				scanf ("%d", &r);
			}
			
			//-_-_-_-_-C�digo 4-_-_-_-_-//
			if (c == 04 || c == 4)
			{
				// Caso IF do C�digo ser igual a 4
				
				system ("cls");
				
				//__________Matriz A__________//
				printf ("\n -_-_-_-_-Matriz A-_-_-_-_-");
				
				for (i=1; i<=3; i++)
				{
					printf ("\n\n <////////////////> \n");
					
					for (j=1; j<=3; j++)
					{
						printf ("\n O valor da linha %d da coluna %d na Matriz A eh: %d", i, j, A[i][j]);
						
					}
				}
				
				//__________Matriz B__________//
				printf ("\n\n\n -_-_-_-_-Matriz B-_-_-_-_-");
				
				for (i=1; i<=3; i++)
				{
					printf ("\n\n <----------------> \n");
					
					for (j=1; j<=3; j++)
					{
						printf ("\n O valor da linha %d da coluna %d na Matriz B eh: %d", i, j, B[i][j]);
						
					}
				}
				
				//__________Matriz C__________//
				printf ("\n\n\n -_-_-_-_-Matriz C-_-_-_-_-");
				
				for (i=1; i<=3; i++)
				{
					printf ("\n\n <================> \n");
					
					for (j=1; j<=3; j++)
					{
						C[i][j] = A[i][j] + B[i][j];
						
						printf ("\n O valor da linha %d da coluna %d na Matriz C eh: %.2f", i, j, C[i][j]/2);
					}
				}
				
				printf ("\n\n Deseja voltar ao Menu?");
				printf ("\n (Digite '1' para Sim)");
				printf ("\n (Digite '2' para Nao)");
				printf ("\n  ");
				scanf ("%d", &r);
			}
			
			//__________Encerrando o Programa__________//
			if (c == 00 || c == 0)
			{
				// Caso IF do C�digo ser igual a 0
				
				system ("color 04");
				printf ("\n Fim do Programa!");
				return 0; //Encerra o programa
			}
			
			//__________Caso N�o(Menu2)__________//
			if (r<1 || r>=2)
			{
				//Fiz essa �rea para ter certeza de que o "While" funcionaria como planejo, sem ter algum tipo de erro indesejado
				//Todavia, eu poderia ter colocado esses dados fora do comando "While" e ainda daria certo
				
				system ("color 04");
				printf ("\n Fim do Programa!");
				return 0;
			}
		}
	}
		
	
	//__________Caso N�o__________//
	if (strcmp(m,"Nao") == 0 || strcmp(m,"nao") == 0)
	{
		/* Aqui seria a situa��o do usu�rio ter escrito "nao" naquela pergunta;
		Como o Menu n�o iria se inicializar e o programa simplesmente acabaria, eu decidi colocar
		essa decora��o para ele pelo menos acabar com estilo 
		
		PS: Sim, � a mesma de caso voc� finalize o programa dentro do Menu e dentro do Menu2*/
		
		system ("color 04");
		printf ("\n Fim do Programa!");
		return 0;
	}
}
