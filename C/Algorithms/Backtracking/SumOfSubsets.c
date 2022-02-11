#include<stdio.h>
int n;

void printSubset(int arr[], int res[]){
	for(int i=0;i<n;i++){
		if(res[i] == 1){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}

void SumOfSubsets(int arr[], int res[], int s, int sum, int maxSum){
	if(sum == maxSum){
		printSubset(arr,res);
		return;
	}
	res[s] = 1;
	sum += arr[s];
	if(sum <= maxSum){
		SumOfSubsets(arr,res,s+1,sum,maxSum);
	}
	res[s] = 0;
	sum -= arr[s];
	if(sum + arr[s] <= maxSum){
		SumOfSubsets(arr,res,s+1,sum,maxSum);
	}
}

void main(){
	int s = 0;
	int maxSum;
	printf("Enter n\n");
	scanf("%d",&n);
	int arr[n];
	int res[n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
		res[i] = 0;
		scanf("%d",&arr[i]);
	}
	printf("Enter the Max Sum\n");
	scanf("%d",&maxSum);
	printf("Printing the Subsets\n");
	SumOfSubsets(arr,res,s,0,maxSum);
}
	
