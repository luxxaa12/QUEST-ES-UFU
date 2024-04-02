#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vetor[6];
	
	for(i=0;i<6;i++){
		printf("Digite um numero para o vetor %dª:",i+1);
		scanf("%d",&vetor[i]);
	}
	
	for(i = 6-1 ;i>=0;i--){
		printf("\nNumeros exibidos de tras pra frente %i  ",vetor[i]);
	}
}
