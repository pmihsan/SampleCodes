#include<stdio.h>
int min,max;
int n;

void MinMax(int arr[], int s, int e){
	if(n == 1){
		return;
	}
	if(s == e){
		max = min = arr[s];
	}
	else if(s == e-1){
		if(arr[e] > arr[s]){
			min = arr[s];
			max = arr[e];
		}
		else{
			min = arr[e];
			max = arr[s];
		}
	}
	else{
		int m = s + (e-s)/2;
		MinMax(arr,s,m);
		int max1 = max,min1 = min;
		MinMax(arr,m+1,e);
		if(max1 > max){
			max = max1;
		}
		if(min1 < min){
			min = min1;
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
	min = max = arr[0];
	MinMax(arr,0,n-1);
	printf("Min = %d\nMax = %d\n",min,max);
}
