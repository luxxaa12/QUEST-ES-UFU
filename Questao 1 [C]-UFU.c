#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
	int A[5];
	
	int i;
	int soma = 0;
	
	printf("Digite os elementos do vetor:\n");
	for (i = 0; i < 6; i++){
		printf("A: %d:",i + 1);
		scanf("%d",&A[i]);
	}
	
	soma=A[0]+A[1]+A[5];
	A[4]=100;
	
	printf("\nExibindo os dados em um vetor em um laço de repetição");
	for(i = 0; i < 6; i++){
		printf("\nA %d: %d\n",i+0,A[i]);
	}
	printf("\nSoma %dª",soma);
	return 0;
}
