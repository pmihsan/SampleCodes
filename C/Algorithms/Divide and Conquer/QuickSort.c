#include<stdio.h>
int n;

void printArray(int arr[]){
	printf("Displaying the array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void quickSort(int arr[], int low, int high){
	if(low >= high){
		return;
	}
	int s = low;
	int e = high;
	int m = s + (e - s)/2;
	int pivot = arr[m];
	while(s <= e){
		while(arr[s] < pivot){
			s++;
		}
		while(arr[e] > pivot){
			e--;
		}
		if(s <= e){
			int temp = arr[s];
			arr[s] = arr[e];
			arr[e] = temp;
			s++;
			e--;
		}
	}
	quickSort(arr,low,e);
	quickSort(arr,s,high);
}

void main(){
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	quickSort(arr,0,n-1);
	printArray(arr);
}
