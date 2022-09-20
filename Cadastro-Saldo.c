#include <stdio.h>


int main(){
	
	float receita[12];
	float despesas[12];
	
	//Quadro de Aviso
	printf("\n");
	printf("(Quadro de Aviso)\n");
	printf("\n");
	printf("| Cadastre as receitas e despesas na ordem abaixo! |\n");
	printf("| Da ESQUERDA para DIREITA! |\n");
	printf("\n");
	printf("| Jan - Fev - Mar - Abr - Mai- Jun |\n");
	printf("| Jul - Ago - Set - Out - Nov - Dez |\n");
	printf("\n");
	printf("|=====================================| \n");
	
	//Cadastro de receita
	printf("\n");
	printf("| Cadastro de receitas | \n");
	
	for(int i = 0 ; i < 12 ; i++){
		printf("Cadastre aqui R$: ");
		scanf("%f",&receita[i]);
	}	
	
	printf("\n");
	printf("CADASTRO REALIZADO COM SUCESSO!\n");
	printf("\n");
	
	
		//Cadastro de despesas
	printf("\n");
	printf("| Cadastro de despesas | \n");
	
	for(int i = 0 ; i < 12 ; i++){
		printf("Cadastre aqui R$: ");
		scanf("%f",&despesas[i]);
	}	

	printf("\n");
	printf("CADASTRO REALIZADO COM SUCESSO!\n");
	printf("\n");

	int loop =1;

	while(loop == 1)
	{	
		int saldo;
		printf("\n");
		printf("Escolha uma das opções abaixo\n");
		printf("Saldo por mês (1) - Saldo por trimestre (2) - Saldo por semestre (3)\n");
		printf("Saldo por ano (4) - Finalizar Programa! (5)  \n");
		printf("Digite aqui: ");
		scanf("%d",&saldo);
		printf("\n");
		//Saldo do Mês
		
		if (saldo == 1)
		{
				//Calculo Saldo do Mês
				int mes;
				printf("Escolha qual Mês você quer ver o saldo!\n");
				printf("Digite aqui: ");
				scanf("%d",&mes);
				
				//Mês 1
				if (mes ==1){
						float Jan = (receita[0] - despesas[0]);
						printf("O saldo é: %.2f\n",Jan);
				}
				
				//Mês 2
				if (mes ==2){
						float Fev = (receita[1] - despesas[1]);
						printf("O saldo é: %.2f\n",Fev);
				}	
				
				//Mês 3
				if (mes ==3){
						float Mar = (receita[2] - despesas[2]);
						printf("O saldo é: %.2f\n",Mar);
				}
				
				//Mês 4
				if (mes ==4){
						float Abr = (receita[3] - despesas[3]);
						printf("O saldo é: %.2f\n",Abr);
				}
				
				//Mês 5
				if (mes ==5){
						float Mai = (receita[4] - despesas[4]);
						printf("O saldo é: %.2f\n",Mai);
				}	
				
				//Mês 6
				if (mes ==6){
						float Jun = (receita[5] - despesas[5]);
						printf("O saldo é: %.2f\n",Jun);
				}		
				
				//Mês 7
				if (mes ==7){
						float Jul = (receita[6] - despesas[6]);
						printf("O saldo é: %.2f\n",Jul);
				}		
				
				//Mês 8
				if (mes ==8){
						float Ago = (receita[7] - despesas[7]);
						printf("O saldo é: %.2f\n",Ago);
				}
				
				//Mês 9
				if (mes ==9){
						float Set = (receita[8] - despesas[8]);
						printf("O saldo é: %.2f\n",Set);
				}
				
				//Mês 10
				if (mes ==10){
						float Out = (receita[9] - despesas[9]);
						printf("O saldo é: %.2f\n",Out);
				}
				
				//Mês 11
				if (mes ==11){
						float Nov = (receita[10] - despesas[10]);
						printf("O saldo é: %.2f\n",Nov);
				}
				
				//Mês 12
				if (mes ==12){
						float Dez = (receita[11] - despesas[11]);
						printf("O saldo é: %.2f\n",Dez);
				}
		}

			//Saldo por trimestre
		if(saldo == 2){	
				// (0 1 2)   

				//1° trimestre
				
				float somaTotal = 0;
				float despesaTotal = 0;
				float saldoT1;
				
				for (int i = 0 ; i < 3 ; i++){
					somaTotal = somaTotal + receita[i];
				}
				
				for (int i = 0; i < 3 ; i++){
					despesaTotal = despesaTotal + despesas[i]; 
				}
				
				saldoT1 = saldoT1 + (somaTotal - despesaTotal); 
				
				printf("O saldo do 1° trimestre é R$: %.2f",saldoT1);
				printf("\n");

				//2° trimestre
				// (3 4 5) 

				float somaTotal2;
				float despesaTotal2;
				float saldoT2;
				
				for (int i = 3 ; i < 6 ; i++){
					somaTotal2 = somaTotal2 + receita[i];
				}	

				for (int i = 3; i < 6 ; i++){
					despesaTotal2 = despesaTotal2 + despesas[i]; 
				}
				
				saldoT2 = saldoT2 + (somaTotal2 - despesaTotal2);
				
				printf("O saldo do 2° trimestre é R$: %.2f",saldoT2);
				printf("\n");
				
				//3° trimestre
				// (6 7 8) 
				
				float somaTotal3;
				float despesaTotal3;
				float saldoT3;
				
				for (int i = 6 ; i < 9 ; i++){
					somaTotal3 = somaTotal3 + receita[i];
				}
				
				for (int i = 6; i < 9 ; i++){
					despesaTotal3 = despesaTotal3 + despesas[i]; 
				}
				saldoT3 = saldoT3 + (somaTotal3 - despesaTotal3);
				
				printf("O saldo do 3° trimestre é R$: %.2f",saldoT3);
				printf("\n");
				
				//4° trimestre
				// (9 10 11)	
				
				float somaTotal4;
				float despesaTotal4;
				float saldoT4;
				
				for (int i = 9 ; i < 12 ; i++){
					somaTotal4 = somaTotal4 + receita[i];
				}
				
				for (int i = 9; i < 12 ; i++){
					despesaTotal4 = despesaTotal4 + despesas[i]; 
				}
				saldoT4 = saldoT4 + (somaTotal4 - despesaTotal4);
				
				printf("O saldo do 4° trimestre é R$: %.2f",saldoT4);
				printf("\n");
			
		}	
			
			
			//Saldo por semestre

		if(saldo == 3){
				//1° Semestre
				//(0 1 2 3 4 5 )
				
				float somaTotalS;
				float despesaTotalS;
				float saldoS1;
				
				for(int i = 0 ; i < 6 ; i++){
					somaTotalS = somaTotalS + receita[i];
				}
				
				for (int i = 0; i < 6 ; i++){
					despesaTotalS = despesaTotalS + despesas[i];
				}
				
				saldoS1 = saldoS1 + (somaTotalS -despesaTotalS);
				
					printf("O saldo do 1° semestre é R$: %.2f",saldoS1);
					printf("\n");	
				
				
				//2° Semestre
				//(6 7 8 9 10 11 )	
				
				float somaTotalS2;
				float despesaTotalS2;
				float saldoS2;
				
				for(int i = 6 ; i < 12 ; i++){
					somaTotalS2 = somaTotalS2 + receita[i];
				}
				
				for (int i = 6; i < 12 ; i++){
					despesaTotalS2 = despesaTotalS2 + despesas[i];
				}
				
				saldoS2 = saldoS2 + (somaTotalS2 - despesaTotalS2);
				
					printf("O saldo do 2° semestre é R$: %.2f",saldoS2);
					printf("\n");
		}	
			
			
			//Saldo por ano	
		if(saldo == 4){
			
				//1° Ano
				//(0 1 2 3 4 5 6 7 8 9 10 11 )	
			
				float somaTotalAno;
				float despesaTotalAno;
				float saldoAno;
			
				for (int i = 0 ; i < 12 ; i++){
					somaTotalAno = somaTotalAno + receita[i];
				}
			
				for (int i = 0 ; i < 12 ; i++){
					despesaTotalAno = despesaTotalAno + despesas[i];
				}
				
			
				saldoAno = saldoAno + (somaTotalAno - despesaTotalAno);
				
				printf("O saldo do Ano é R$: %.2f",saldoAno);
				printf("\n");
			
		}

		if(saldo == 5){
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