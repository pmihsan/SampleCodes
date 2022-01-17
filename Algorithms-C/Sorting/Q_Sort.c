#include<stdio.h>
#include<stdlib.h>
int n;

void printArray(int arr[]){
	printf("Displaying the array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int compare (const void * a, const void * b){
	int data1 = *(int *)a, data2 = *(int *)b;
	if(data1 < data2){      // a < b
		return -1;
	}
	else if(data1 == data2){  // a == b
		return 0;
	}
	return 1;  // a > b
}

//Alternate Method
int compareFunc(const void *a, const void *b){
	return ( *(int *)a - *(int *)b );
}

void main(){
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr, n, sizeof(int), compareFunc);
	printArray(arr);
}
