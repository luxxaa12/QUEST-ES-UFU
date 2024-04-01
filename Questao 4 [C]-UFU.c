#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int X[4];
	int Y[4];
	int soma=0;
	
	
	for(i=0;i<4;i++){
	printf("Digite o valor %dª x:",i+1);
	scanf("%i",&X[i]);
	}
	
	for(i=0;i<4;i++){
		printf("Digite o valor %dª y:",i+1);
		scanf("%i",&Y[i]);
		
	}

	
	for(i=0;i<4;i++){	
	soma=X[i]+Y[i];
			printf("\nSoma %i:",soma);
	}
	
}

