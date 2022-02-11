/* Cyclic sort the elements from 1 to n */
#include<stdio.h>
int n;

void printArray(int arr[]){
	printf("Displaying the array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void cyclicSort(int arr[]){
	int i = 0;
	while(i < n){
		int correctIndex = arr[i] - 1;
		if(arr[i] != arr[correctIndex]){
			swap(&arr[i], &arr[correctIndex]);
		}
		else{
			i++;
		}
	}
}

void main(){
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements from 1 to %d\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	cyclicSort(arr);
	printArray(arr);
}
