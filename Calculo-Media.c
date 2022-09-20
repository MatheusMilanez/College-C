# include <stdio.h>

int main(){
	
	//Imprime o cabeçalho do programa
		printf("***************************************************\n");
		printf("    * Bem-vindo ao nosso tire a média *\n");
		printf("***************************************************\n");
	
		float ta1;
		float ta2;
		float ta3;
		float media;
		float mediaFinal;
		printf("digite a nota da TA1:");
		scanf("%f",&ta1);
		printf("digite a nota da TA2:");
		scanf("%f",&ta2);
		
		 media = (ta1+ta2)/2;
		if(media >=6){	
			printf("Parabens! você passou!!!\n");
			printf("sua média é:  %f\n",media);
			printf("FIM DA EXECUÇÂO DO PROGRAMA\n");
		}else{
					printf("Você está de TA3!\n");
					printf("digite a nota da TA3: \n");
					scanf("%f",&ta3);
					
					
					if( (ta3 <ta1) && (ta3 < ta2)  || (ta3 <=ta1) && (ta3 <= ta2) ){
						printf("REPROVADO\n");
					}	else{
								if(ta1 > ta2){
										mediaFinal = (ta1+ta3)/2;
									}	else{
											mediaFinal = (ta2+ta3)/2;
										}
						}
					
					if(mediaFinal>=6){
						printf("APROVADO!!! Sua media é:%f\n",mediaFinal);
					}else{
						printf("REPROVADO!!! Sua media é:%f\n",media);
					}
				
					printf("\n");
					printf("\n");
					printf("FIM DA EXECUÇÂO DO PROGRAMA\n");
		}	
return 0;
}
