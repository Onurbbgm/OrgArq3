#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quickSort(int lista[100], int comeco, int fim);
#define N 100
int main(int argc , char * argv []){
	int i;
	int lista[100];
	srand(time(NULL));
	for(i = 0; i<N; i++){
		lista[i] = rand()%100;	
	}
	//printf("%d\n",callQuick(lista));
	printf("Lista nao organizada: \n");	
	int l;
	for(l = 0; l<N; l++){
		printf("%d\n",lista[l]);	
	}
	quickSort(lista, 0, 99);
	printf("Lista organizada: \n");	
	int j;
	for(j = 0; j<N; j++){
		printf("%d\n",lista[j]);	
	}
	return 0;
}

//int callQuick(int vetor[]){
//	int len = sizeof(vetor)/sizeof(vet[0]);
//	return len;
	//quickSort(vetor, 0, len-1);
//}

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
