#include<stdio.h>
#include<limits.h>
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

int getMinIndex(int arr[], int start){
	int min = start;
	for(int i = start;i<=n-1;i++){
		if(arr[min] > arr[i]){
			min = i;
		}
	}
	return min;
}

void selectionSort(int arr[]){
	for(int i = 0;i<n-1;i++){
		int firstIndex = i;
		int minElementIndex = getMinIndex(arr,firstIndex);
		swap(&arr[firstIndex],&arr[minElementIndex]);
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
	selectionSort(arr);
	printArray(arr);
}
