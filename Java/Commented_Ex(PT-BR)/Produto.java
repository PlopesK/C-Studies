//Exerc�cio 4 -- 16/08

import javax.swing.JOptionPane;
public class Produto
{
	public static void main(String args [])
	{
		int codigo = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o c�digo"
		 + "\n Caderno = 001" + "\n L�pis = 002" + "\n Borracha = 003" + "\n Diversos = Qualquer outro valor"));
		//Solicita um valor inteiro para ser adquirido pela categoria "codigo"
		
		switch (codigo) //Obrigat�rio para o funcionamento do comando 'case'. O valor solicitado ser� da categoria "codigo"
		{
			case 001 : JOptionPane.showMessageDialog(null, "Caderno"); //Caso "codigo" for igual a '001', ser� exibido essa mensagem
			break; //Comando obrigat�rio para finalizar um comando 'case', se n�o utiliza-lo o 'case' continuar� aberto

			case 002 : JOptionPane.showMessageDialog(null,"L�pis"); //Caso "codigo" for igual a '002', ser� exibido essa mensagem
			break;

			case 003 : JOptionPane.showMessageDialog(null, "Borracha"); //Caso "codigo" for igual a '003', ser� exibido essa mensagem
			break;

			default : JOptionPane.showMessageDialog(null, "Diversos"); 
			//Se 'coigo' for diferente de todos os anteriores, ser� demonstrada essa mensage
			//O comando 'default' define uma reposta padr�o para os casos. Ou seja, caso nenhum 'case' seja executado, a resposta entregue ser� a presente no comando 'default'
		}
	}
}