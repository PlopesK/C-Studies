// Exercicio 2 -- 16/08

import javax.swing.JOptionPane;
class Premio 
{
	public static void main (String args [])
	{
		float bonus; //Os valores recebido pela categoria "bonus" ser�o do tipo Float, ou seja, poder� ter valores n�o inteiros
		float salario = Float.parseFloat(JOptionPane.showInputDialog(null, "Qual o sal�rio?"));
		//Solicita��o dos valores para a categoria "salario", tamb�m do tipo Float
		
		int tempo = Integer.parseInt(JOptionPane.showInputDialog(null, "A quanto tempo est� na empresa? (Digite a quantia de meses)" 
		+ "\n [Caso n�o tenha completado nem 1 m�s, digite 0]"));
		//Solicita��o de valores inteiros para a categoria "tempo"
	
		if (tempo >= 5) //Caso o tempo seja maior ou igual a 5, o valor da categoria "salario" ser� multiplicado por 0.20f e atribuido a categoria "bonus"
		{
			bonus = salario * 0.20f;
		}
		
		else //Do contr�rio, caso o valor seja menor que 5, o valor da categoria "salario" ser� multiplicado por 0.10f e atribuido a categoria "bonus"
		{
			bonus = salario * 0.10f;
		}
		
		JOptionPane.showMessageDialog(null, "O valor do b�nus �: " + bonus); //Demonstra ao usu�rio qual ser� o valor do bonus recebido
	}
}