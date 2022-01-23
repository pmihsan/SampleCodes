#include<stdio.h>
#define N 10
int n;

void printArray(int arr[]){
	printf("Displaying the array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int largestDigit(int arr[]){
	int max = 0;
	int count =0 ;
	for(int i=0;i<n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	while(max > 0){
		count++;
		max /= 10;
	}
	return count;
}

void radixSort(int arr[]){
	int bucket[N][N];
	int bucketCount[N];
	int divisor = 1;
	int digitCount = largestDigit(arr);
	
	for(int pass = 0;pass<digitCount;pass++){
		for(int i=0;i<N;i++){
			bucketCount[i] = 0;
		}
		for(int i=0;i<n;i++){
			int rem = (arr[i]/divisor) % N;
			bucket[rem][bucketCount[rem]] = arr[i];
			bucketCount[rem] += 1;
		}
		int i = 0;
		for(int k=0;k<N;k++){
			for(int j=0;j<bucketCount[k];j++){
				arr[i] = bucket[k][j];
				i++;
			}
		}
		divisor *= N;
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
	radixSort(arr);
	printArray(arr);
}
