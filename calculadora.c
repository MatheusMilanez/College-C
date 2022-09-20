/*Calculadora*/

#include<stdio.h>

int main(){
int loop = 1;
	
while(loop == 1){
		
		/*Menu*/
		int opcao;
		
		printf("\n");
		printf("Calculadora\n");
		printf("\n");
		
		printf("Escolha uma das opções abaixo\n");
		printf("Adição (1) - Subtração (2) - Divisão (3)\n");
		printf("Multiplicação (4) - Finalizar programa! (5)\n");
		
		printf("\n");
		printf("Digite aqui: ");
		scanf("%d",&opcao);
		
	if(opcao == 1){	
		/*Adição*/
		float A;
		float B;
		float soma;
		
		printf("Digite o primeiro valor: ");
		scanf("%f",&A);
		printf("Digite o segundo valor: ");
		scanf("%f",&B);
		
		soma = (A + B);
		
		printf("O resultado é: %.2f\n",soma); 
	}	
		
		
	if(opcao == 2){	
		/*Subtração*/
		float A;
		float B;
		float subtracao;
		
		printf("Digite o primeiro valor: ");
		scanf("%f",&A);
		printf("Digite o segundo valor: ");
		scanf("%f",&B);
		
		subtracao = (A - B);
		
		printf("O resultado é: %.2f\n",subtracao); 
	}			
			
		
		
	if(opcao == 3){	
		/*/*Divisão*/
		float A;
		float B;
		float divisao;
		
		printf("Digite o primeiro valor: ");
		scanf("%f",&A);
		printf("Digite o segundo valor: ");
		scanf("%f",&B);
		
		divisao = (A/B);
		
		printf("O resultado é: %.2f\n",divisao); 
	}
		
	if(opcao == 4){	
		/*Multiplicação*/
		float A;
		float B;
		float mult;
		
		printf("Digite o primeiro valor: ");
		scanf("%f",&A);
		printf("Digite o segundo valor: ");
		scanf("%f",&B);
		
		mult = (A*B);
		
		printf("O resultado é: : %.2f\n",mult); 
	}	


		
	if(opcao == 5){		
		printf("Programa Finalizado!\n");
		return 0;
	}	
	
	printf("\n");
	printf("Deseja continuar usando o programa sim (1) ou não (2)? ");
	scanf("%d",&loop);
		
	if (loop == 2){
		// Fechar programa 
		printf("Programa fechado !\n");
	}
	
}	
	
	
	
}