#include<stdio.h>//Biblioteca com o printf() e o scanf() 
#include<math.h>//Biblioteca com o pow() e o sqrt()



int main(){
	//Variaveis da questao A
	char opcao;
	float catetoOposto,catetoAdjacente,hipotenusa,seno;

	//Variaveis da questao B
	int ano,por4,por100,por400;
	char nomePessoa[50];
	 
			
			
	//Variaveis da questao C
	char nome[40];
	int inicio,termino,situacao;
	
	//Questao numero 1 cabecalho
	printf("Algoritimo e programacao \t Joyce Siqueira \t Daniel Luiz dos Santos \n Analise e desenvolviment de Sistemas \n");	
	printf("https://github.com/DanielL159/Prova.git");
	printf("\n");

//Adiquirindo a opcao de codigo ou questao que o usuario fara
	printf("Qual questao gostaria de ver  A ,B ou C:");
	scanf("%s",&opcao);
	
	//Inicicio do switch principal
	switch(opcao){
		
		//inicio do codigo ,condicional e questao A
		case 'A':
			//Recebendo o cateto oposto
			printf("Por gentileza me forneca o Cateto Opostos a =");
			scanf("%f",&catetoOposto);
			
			//Recebendo o cateto adjacente
			printf("Por gentileza me forneca o cateto adjacente b =");
			scanf("%f",&catetoAdjacente);
			
			//hipotenusa recebe o valor do calculo
			hipotenusa = sqrt(pow(catetoOposto,2) + pow(catetoAdjacente,2));
			//sqrt() calculara a raiz quadrada dp resiltado final do calculo interno
			//o primeiro pow() vai pegar o valor que esta armazenada na variavel catetoOposto e elevar ela ao quadrado por isso o 
			//assim como o segundo pow() a diferença e que um e com o adjacente e outro com o oposto 

			seno =  catetoOposto/hipotenusa	;//seno e calculado
		
			printf(" Hipotenuas : %.3f\n seno : %.3f",hipotenusa,seno);//resultados mostram na tela igual a saida pedida na prova
			//o %.3f\n indica ao compudador que so deve ser mostrado 3 numeros(casas decimais) depois da virgual 
			
		break;//fim da questao e codigo A

		//inicio do codigo ,condicional e questao B
		case 'B':
		printf("Qual o seu nomePessoa :");
		fflush(stdin);//limpa licho da memoria
		scanf("%s",&nomePessoa);

		printf("Qual seu ano de nascimento:");
		scanf("%d",&ano);

		por4= ano %4;

		por100=ano%100;
		
		por400=ano%400;

		if (ano > 1900 && ano < 2022 )// A questao avia pedido para estar entrre esses anos 
		{
			if (por4 ==0 ) // como ser divisivel por 4 e algo norma pra um ano pode ser feito dessa forma 
			{
				if (por100 != 0)
				{
					printf("Nome =%s, Ano %d e bissexto",nomePessoa,ano);
				}else if (por100 == 0 && por400 ==0)
				{
					printf("%s, Ano %d e bissexto",nomePessoa,ano);
				}
					
			}else{
				printf("%s , %d não é um ano bissexto",nomePessoa,ano);
			}
			
		}
		
		break;//fim da questao e codigo B







		
		case 'C':
			printf("Me forneca o Nome da Obra :");
			fflush(stdin);
			scanf("%s",&nome);
			
			printf("Mes de inicio :");
			scanf("%d",&inicio);
			
			printf("Mes de termino :");
			scanf("%d",&termino);
			
			printf("Qual a situacao da Obra :");
			scanf("%d",&situacao);
			
			printf("Nome da Obra = %s\n",nome);
			
			switch(situacao){//Inicio da Switch da quuestao C
				
				case 1:
					printf("Obra Concluida\n");
				break;
				
				case 2:
					printf("Problemas no projeto\n");
				break;
				
				case 3:
					printf("Atraso nos repasses financeiros\n");
				break;	
				
				case 4:
					printf("Greve dos trabalhadores\n");
				break;
					
				case 5:
					printf("Falta de materiais\n");
				break;
				
				case 6:	
					printf("Falta de equipamentos\n");
				break;
			}//Fim da Switch da quuestao C
			printf("Tempo de execucao %d",termino - inicio);
					
		break;////fim da questao e codigo C
	
	}//Fim do switch principal 
		
}//fim do codigo 
