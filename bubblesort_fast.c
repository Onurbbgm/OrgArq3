#include <stdio.h>
#include <stdlib.h>

//#include <hf-risc.h>

#define N 100

void bubble(int lista[100]);

int main(int argc , char * argv []){
        int i;
        int lista[100];
        for(i = 0; i<N; i++){
                lista[i] = random()%100;
        }
        printf("\nLista nao organizada: ");
        int l;
        for(l = 0; l<N; l++){
                printf("%d, ",lista[l]);
        }
        bubble(lista);
        printf("\nLista organizada: ");
        int j;
        for(j = 0; j<N; j++){
                printf("%d, ",lista[j]);
        }
	printf("\n");
        return 0;
}

void bubble(int lista[100]){
	int i,j,aux;
  	for (i = 0 ; i < 99; i++)
  	{
    		for (j = 0 ; j < 99-i; j++)
		{
			if (lista[j] > lista[j+1])
			{
		        	aux       = lista[j];
		        	lista[j]   = lista[j+1];
		        	lista[j+1] = aux;
			}
		}
	}
}
