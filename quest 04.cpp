#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "Portuquese_Brazil"); 
	
	printf("Descubra se o n�mero est� inserido no vetor!\n\n");
	
	int vet[10], num, encon = 0, pos = 0;
	
	srand(time(NULL)); //faz com que gere numeros aleatorios toda vez que o compilar o programa!! //
	
	printf("Os n�meros foram gerados de forma aleat�ria!! \n\n");
	
	for(int i=0; i<10;i++){
		vet[i] = rand() % 100;
		//Para que um numero 'x' receba um valor entre 1 e 10, -> x = 1 + (rand() % 10)...
		// ai seria numeros aleat�rios entre 1 e 10. Colocando 100 amplia os numeros possiveis.
		// Se quiser mostrar os numeros gerados seria assim: printf("%d numero: %d\n\n", i+1, vet[i])
	}
		for(int i=0; i<10;i++){
		printf("%d\t\t", vet[i]);
	}
	printf("Escolha um n�mero entre 0 e 99 para verificar se esta dentro do vetor: ");
	scanf("%d", &num);
	
	for(int i=0; i<10;i++){
		if(vet[i]==num){
			encon=1;
			pos=1;
		}
	}
	
	if(encon==1){
		printf("\nO n�mero: %d, est� dentro do vetor na posi��o: %d", num, pos+1);
	}else{
		printf("\nO n�mero escolhido n�o est� dentro do vetor!!");
	}
		
	return 0;
}
