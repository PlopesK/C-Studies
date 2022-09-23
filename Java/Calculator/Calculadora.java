//Calculadora_05/05

import javax.swing.*;
public class Calculadora
{
 public static void main (String args[])
  {
   String aux1 = JOptionPane.showInputDialog(null, "Forne�a o valor do 1� n�mero: ");
   if (aux1 == null)
   {
        System.exit(0);
   }
   
    String aux2 = JOptionPane.showInputDialog(null, "Forne�a o valor do 2� n�mero: ");
    if (aux2 == null)
    {
        System.exit(0);
    }
    
    try
    {
     int num1 = Integer.parseInt(aux1);
     int num2 = Integer.parseInt(aux2);
     JOptionPane.showMessageDialog(null, "Soma = " + (num1 +num2));
     JOptionPane.showMessageDialog(null, "Subtra��o = " + (num1  - num2));
     JOptionPane.showMessageDialog(null, "Multiplica��o = " + (num1 * num2));
     JOptionPane.showMessageDialog(null, "Divis�o = " + (num1 / num2));
     }
     catch (ArithmeticException erro)
       {
    	 JOptionPane.showMessageDialog(null, "Erro de divis�o por zero!", "erro", 0);
       }
     catch (NumberFormatException erro)
      {
        JOptionPane.showMessageDialog(null, "Digite apenas n�meros inteiros!", "ERRO", JOptionPane.ERROR_MESSAGE);
      }
      System.exit(0);
    }
}
