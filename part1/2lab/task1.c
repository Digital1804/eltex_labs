#include "stdio.h"
#include "stdlib.h"

int main(){
	unsigned int N;
	printf("Input positive number:");
	scanf("%d", &N);
	int **arr = (int**)calloc(N, sizeof(int*));
	for (int i = 0; i < N ; i++){
		arr[i] = (int*)calloc(N, sizeof(int));
	}
	printf("\nResult:\n");
	for (int i = 0; i < N ; i++){
		for (int j = 0; j < N ; j++){
			arr[i][j] = N*i+j+1;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < N; i++){
		free(arr[i]);
	}
	free(arr);
	return 0;
}