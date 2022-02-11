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

int getMaxIndex(int arr[], int end){
	int max = 0;
	for(int i = 0;i<=end;i++){
		if(arr[max] < arr[i]){
			max = i;
		}
	}
	return max;
}

void selectionSort(int arr[]){
	for(int i=0;i<n-1;i++){
		int lastIndex = n - i - 1;
		int maxElementIndex = getMaxIndex(arr,lastIndex);
		swap(&arr[maxElementIndex], &arr[lastIndex]);
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
