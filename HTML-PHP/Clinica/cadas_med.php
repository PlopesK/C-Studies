<html lang="pt-BR">
	<head>
		<title>Cadastro do Medico</title>
		<style type="text/css">
			.card {
				   border: 4px solid #2C7DC0;
				   background-color: #94C5EF;
				   border-radius: 10px;
				   height: 300px;
				   text-align: center;
				   font-size: 30px;
				   }
					
			input[type="button"], form input[type="reset"], form input[type="submit"] 
			{
				   border: 2px solid #2C7DC0;
				   background-color: #94C5EF;
				   border-radius: 10px;
				   height: 50px;
				   width: 300px;
				   text-align: center;
				   font-size: 20px;
				   color: #2C7DC0;
				   cursor: pointer;
			}
			
			input[type="text"] 
			{
					font-size: 20px;
					width: 400px;
					height: 40px;
			}
			
		</style>
		<meta charset="utf-8">
	</head>
	<body>
    <font size= "5" face= "Sans Serif" color= "#2C7DC0">
		<H1><center> Cadastro do Médico</center></H1>
		<H5><center> Insira as informações abaixo para que o cadastro seja bem sucedido</center></H5>
	</font>
    <br><br>
	
	<form action="ScriptCadasMedico.php" method="POST">
		<p class="card">
			<br><br>
            <input type="text" name="nome" placeholder="Insira o Nome do Médico">
			<br>
            <input type="text" name="crm" placeholder="Insira o CRM do Médico">
			<br><br><br>

            <input type="submit" value="Cadastrar">
			&nbsp;&nbsp;&nbsp; &nbsp;&nbsp; <!--Linha pra separação dos botões -->
            <input type="reset" value="Limpar">
		</p>
    </form>
		
		<a href="medico.php">
			<center><input type="button" value="Voltar"></center>
		</a>
	</font>
	</body>
</html>