#include<stdio.h>
#include<limits.h>

int MatrixChain(int arr[], int s, int e){
	if(s == e){
		return 0;
	}
	int k, min = INT_MAX, count = 0;
	for(k = s;k < e;k++){
		count = MatrixChain(arr, s, k) + MatrixChain(arr, k+1, e) + arr[s-1]*arr[k]*arr[e];
		if(count < min){
			min = count;
		}
	}
	return min;
}


void main(){
	//int arr[] = {10, 30, 20, 40, 10};
	//int arr[] = { 1, 2, 3, 4, 3 };
	int arr[] = {10, 20, 30, 50};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = MatrixChain(arr, 1, n - 1);
	printf("Minimum number of matrix multiplication - %d\n",ans);
}
	
