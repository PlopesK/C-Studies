//Exerc�cio 5 -- 16/08

import javax.swing.JOptionPane;
class ExEnquanto 
{
	public static void main (String args [])
	{
		float media, soma; //Define o valor que ser� recebido pelas categorias "media" e "soma" como valores Float (sendo poss�vel valores n�o inteiro)
		int cont; //Define a categoria "cont" para receber apenas valores inteiros
			
		cont = 0; //O valor padr�o de "cont" ser� 0
		soma = 0f; //O valor padr� de "soma" ser� 0

		while (cont < 8) 
		//O comando 'while' realiza um grupo de a��es at� que o contador esteja completo
		//Neste caso, at� que o valor da categoria "cont" seja igual a 8, o programa ser� executado (Eu tirei o 850 porque se n�o demoraria muito)
		{
			float numero = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite o n�mero")); //Solicita um valor para a categoria 'numero'
			soma = soma + numero; //O valor da categoria 'soma' ser� igual ao valor da soma entre as categorias 'soma' e 'numero'
			cont = cont +1; //O valor da categoria 'cont' ser� igual a seu valor + 1
			/*Ps: � por causa dessa conta na categoria "cont" que ser� poss�vel o fechamento do comando 'while'
			Caso contr�rio, o comando 'while' n�o teria fim*/
		}
		//Quando o valor m�ximo � alcan�ado, o comando while se fechar�
		
		media = soma / cont; //O valor da categoria "media" � igual a divis�o entre 'soma' e 'cont'
		JOptionPane.showMessageDialog(null, "A m�dia �: " + media); //Exibe ao usu�rio qual ser� o valor da m�dia
	}
}