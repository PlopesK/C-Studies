//Fibonacci 24/05
//2. Escreva um programa em JAVA que apresente a s�rie de FIBONACCI, at� o d�cimo quinto termo. 
//A s�rie de FIBONACCI � formada pela sequ�ncia:  1,1,2,3,5,8,13,21,34, ... etc.
//Esta s�rie se caracteriza pela soma de um termo posterior com o seu anterior subsequente.
public class fibonacci 
{
	public static void main (String args[])
	{
		int i, x = 0, n = 1, soma = 0;
		System.out.println("O n�mero escolhido � 1!");
		for (i=1; i<=15; i++)
		{
			soma= n + x;
			n= x;
			x = soma;
			System.out.println((n + x) + "");
		}
		
		System.out.println();
		System.out.println("Fim do Programa!");
	}
}
