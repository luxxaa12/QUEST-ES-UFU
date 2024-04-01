#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	
	int i;
	int pares;
	int vetor[10];
	
	for(i=0;i<10;i++){
	printf("Digite o valor %iª do vetor ",i+1);
	scanf("%i",&vetor[i]);
	
	if(vetor[i] %2 == 0){
	pares++;	
}
		
}
printf("\n %iª Numeros pares",pares);
	}
	
	
		
	}

