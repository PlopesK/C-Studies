<?php
  $matricula= $_POST ['matricula'];
	$aluno = $_POST ['aluno'];
	$nota1= $_POST ['nota1'];
	$nota2 = $_POST ['nota2'];
	$media =($nota1 + $nota2) / 2;
	echo "A media semestral do aluno � $media <br>";
	if ($media >= 7.0)
	    {
		    echo "Esta com m�dia! <br>";
	            echo "Aprovado! <br>";
		  }
	else
	 	if ($media < 7.0  &&  $media >= 5.0)
	          {
		    echo "Precisa melhorar! <br>";
	            echo "Exame! <br>";
		  } 	
                else
                 {
		    echo "Que situa��o! <br>";
		    echo "Reprovado! <br>";
		  } 
?>
	

