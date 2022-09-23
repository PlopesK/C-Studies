//Exerc�cio 3 -- 16/08

import javax.swing.*;
class Triangulo
{
	public static void main (String args[])
	{
		int A = Integer.parseInt(JOptionPane.showInputDialog(null, "Lado A"));
		//Solicite valores inteiros para a categoria "A"
		int B = Integer.parseInt(JOptionPane.showInputDialog(null, "Lado B"));
		//Solicite valores inteiros para a categoria "B"
		int C = Integer.parseInt(JOptionPane.showInputDialog(null, "Lado C"));
		//Solicite valores inteiros para a categoria "C"

		if (A != 0 && B != 0 && C != 0) //Caso as categorias "A", "B" e "C" sejam diferentes de 0, o programa dever� iniciar
		{
			if (A + B > C && A + C > B && B + C > A) 
				//O programa s� ir� funcionar caso os valores das categorias sejam equiparados
				//Ou seja, o valor de C tem que ser menor do que de A + B; 
				//O valor de B tem que ser menor do que o valor de A + C;
				//O valor de A tem que ser menor do que o valor de B + C;
			{
				if (A != B && A != C && B != C) //Caso todos os respectivos valores sejam diferentes, o Tri�ngulo ser� do tipo Escaleno
				{
					JOptionPane.showMessageDialog(null, "Escaleno");
				}
				
				else
				{
					if (A == B && B == C) //Caso todos os valores sejam iguais, o Tri�ngulo ser� Equil�tero
					{
						JOptionPane.showMessageDialog(null, "Equil�tero");
					}

					else //Caso contr�rio das �ltimas 2 ocasi�es, o Tri�ngulo ser� do tipo Is�celes
					{
						JOptionPane.showMessageDialog(null, "Is�sceles");
					}
				}
			}

			else //Caso n�o seja poss�vel a semelhan�a dos valores, o programa demonstrar� uma mensagem e encerrar�
			{
				JOptionPane.showMessageDialog(null, "N�o forma um tri�ngulo");
			}
		} 

		else //Caso "A", "B" e "C" sejam iguais a 0, o programa ir� entregar uma mensagem e encerrar
		{
			JOptionPane.showMessageDialog(null, "N�o forma um tri�ngulo");
		}
	}
}
