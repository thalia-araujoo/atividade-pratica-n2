#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	printf("Qual o maior e menor n�mero informado\n\n");
	
	int v[10], maior, MaiorIndice, menor, MenorIndice;
	
	for(int i=0; i<10; i++){
		printf("Digite o %d n�mero: ", i+1);
		scanf("%d",&v[i]);
	}
	
	maior = v[10];
	MaiorIndice = 0;
	menor =v[0];
	MenorIndice = 0;
	
	for(int i=0; i<10; i++){
		if(maior < v[i]){
			maior = v[i];
			MaiorIndice = i;
		}
	}
	
	printf("\nO menor n�mero �: %d e est� na posi��o %d\n O maior n�mero �:%d e est� na posi��o %d", menor,MenorIndice,maior,MaiorIndice);
	return 0;
}
