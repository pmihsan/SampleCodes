#include<stdio.h>
int n;

void printArray(int arr[]){
	printf("Displaying the array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void merger(int arr[], int start, int mid, int end){
	int len = end - start;
	int mix[len];
	int i = start;
	int j = mid;
	int k = 0;
	while(i < mid && j < end){
		if(arr[i] < arr[j]){
			mix[k] = arr[i];
			i++;
		}
		else{
			mix[k] = arr[j];
			j++;
		}
		k++;
	}
	while(i < mid){
		mix[k] = arr[i];
		k++;i++;
	}	
	while(j < end){
		mix[k] = arr[j];
		k++;j++;
	}
	for(int l = 0;l<len;l++){
		arr[start + l] = mix[l];
	}
}

void mergeSort(int arr[], int start, int end){
	if(end - start == 1){
		return;
	}
	int mid = start + (end - start)/2;
	mergeSort(arr,start,mid);
	mergeSort(arr,mid,end);
	
	merger(arr,start,mid,end);
}

void main(){
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mergeSort(arr,0,n);
	printArray(arr);
}
