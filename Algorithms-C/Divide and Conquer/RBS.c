#include<stdio.h>

void printArr(int arr[], int n){
	printf("\nDisplaying the array\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int RBS(int arr[], int n, int s, int e, int target){
	if(s == e){
		return -1;
	}
	int m = s + (e - s)/2;
	if(arr[m] < target){
		return RBS(arr,n,m+1,e,target);
	}
	else if(arr[m] > target){
		return RBS(arr,n,s,m-1,target);
	}
	else{
		return m;
	}
	return -1;
}

void main(){
	int n,target = 15;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the  number of elemnets\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printArr(arr,n);
	int ans = RBS(arr,n,0,n-1,target);
	//printArr(arr,n);
	printf("%d\n",ans);
}
