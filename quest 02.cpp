#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil"); 
	
	printf("Calcule os termos de uma P. A\n\n");
	
	int PA[10];
	int num;
	int razao;
	
	printf("Informe um valor inicial: ");
	scanf("%d", &num);
	
	printf("Informe a razao: ");
	scanf("%d", &razao);
	
	PA[0] = num;
	
	for(int i=1; i<10;i++){
		PA[i] = PA[i-1] + razao;
	}
	
	for(int i=1; i<10;i++){
		printf("%d\t", PA[i]);
	}
		
	
	return 0;
}
