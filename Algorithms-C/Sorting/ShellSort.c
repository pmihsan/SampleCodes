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

void shellSort(int arr[]){
	int flag = 1;
	int gap = n;
	
	while(flag == 1 || gap > 1){
		flag = 0;
		gap = (gap + 1)/2;
		for(int i=0;i < n - gap;i++){
			if(arr[i + gap] < arr[i]){
				swap(&arr[i+gap], &arr[i]);
				flag = 0;
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
	shellSort(arr);
	printArray(arr);
}
