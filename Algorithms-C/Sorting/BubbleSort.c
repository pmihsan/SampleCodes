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

void bubbleSort(int arr[]){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				swap(&arr[i],&arr[j]);
			}
		}
	}
}

void main(){
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr);
	printArray(arr);
}
