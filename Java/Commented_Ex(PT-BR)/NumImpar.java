// Exerc�cio 1 -- 16/08

import javax.swing.JOptionPane; //Importa o JOptionPane, algo obrigat�rio para que esse comando funcione
class NumImpar //Classe onde o programa ser� realizado
{ 
	public static void main(String args []) //Define
	{ 
		int numero = Integer.parseInt(JOptionPane.showInputDialog(null, "Qual o n�mero?"));
		//Utilizado para adquirir um valor inteiro e atribui-lo � categoria "numero"
		
		if (numero % 2 == 1) 
			//Abre um if onde: Caso o valor da categoria "numero" n�o for divisivel, ele demonstrar� a frase dentre as colchetes
			//Para indicar algo divisivel por 2, se utiliza o s�mbolo "%". Al�m disso, o n�mero dever� resultar como 1 para isso ocorrer
		{ 
			JOptionPane.showMessageDialog(null, "O n�mero � �mpar"); 
		} 
		else //Caso o valor seja divisivel por 2, ser� demonstrado a frase abaixo
		{
			JOptionPane.showMessageDialog(null, "O n�mero � par");
		}
	} 
}