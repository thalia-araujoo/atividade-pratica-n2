#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil"); 
	
	printf("Calcule os termos de uma P.G \n\n");
	
	int valor, razao, PG[10];
	
	printf("digite o valor inicial: ");
	scanf("%d", &valor);
	
	printf("digite a razão: ");
	scanf("%d", &razao);
	
	PG[0] = valor;
	
	for(int i=1; i<10;i++){
		PG[i] = PG[i-1] * razao;
	}
	
	for(int i=0; i<10;i++){
		printf("%d\t", PG[i]);
	}
	 
	return 0;
}
