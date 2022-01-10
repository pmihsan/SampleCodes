#include<stdio.h>

void printSubset(int arr[], int res[], int n){
	printf("{ ");
	for(int i=0;i<n;i++){
		if(res[i] == 1){
			printf("%d ",arr[i]);
		}
	}
	printf("}\n");
}

void Subsets(int arr[], int res[], int s, int n){
	if(s == n){
		printSubset(arr,res,n);
		return;
	}
	res[s] = 1;
	Subsets(arr, res, s+1, n);
	res[s] = 0;
	if(s < n){
		Subsets(arr, res, s+1, n);
	}
}

void main(){
	int n, s = 0;
	printf("Enter n\n");
	scanf("%d",&n);
	int arr[n];
	int res[n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
		res[i] = 0;
		scanf("%d",&arr[i]);
	}
	printf("Printing Subsets\n");
	Subsets(arr,res,s,n);
}
	
