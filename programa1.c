#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <hf-risc.h>

void quickSort(int lista[100], int comeco, int fim);
#define N 100
int main(int argc , char * argv []){
	int i;
	int lista[100];
	srand(time(NULL));
	for(i = 0; i<N; i++){
		lista[i] = rand()%100;	
	}
	printf("\nLista nao organizada: ");	
	int l;
	for(l = 0; l<N; l++){
		printf("%d, ",lista[l]);	
	}
	quickSort(lista, 0, 99);
	printf("\nLista organizada: ");	
	int j;
	for(j = 0; j<N; j++){
		printf("%d, ",lista[j]);	
	}
	return 0;
}

void quickSort(int vetor[], int comeco, int fim){
    int pivot, aux;
	int i, j;

	pivot = vetor[(comeco+fim)/2];
	i = comeco;
	j = fim;

	while(i <= j){
		while(vetor[i] < pivot)
			i++;

		while(vetor[j] > pivot)
			j--;

		if(i <= j){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;j--;
       		 }
	}

	if(j > comeco)
		quickSort(vetor, comeco, j);

	if(i < fim)
		quickSort(vetor, j+1, fim);
}
