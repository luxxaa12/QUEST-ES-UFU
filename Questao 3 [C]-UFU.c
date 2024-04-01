#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
	float NR[10];
	int i;
	float quadrado[10];
	
	for(i=0;i<10;i++){
	printf("Digite o numero real: %d:",i+1);
	scanf("%f",&NR[i]);

		
	quadrado[10] =NR[i]*NR[i];

	}
		
	
	for(i=0;i<10;i++){
	printf("\nNR %d: %.1f\n",i+1,quadrado[i]);
	}
	/*for(i=0;i<10;i++){
	printf("\nExibindo raiz quadrada dos vetores %d %.1f\n",i+1,quadrado[i]);
	}*/
	return 0;
}
