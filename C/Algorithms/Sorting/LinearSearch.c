#include<stdio.h>

int linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void main(){
    int arr[] = {23,12,45,67,34,56,89,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    int ans = linearSearch(arr,n,target);
    if(ans == -1){
        printf("Target Element not found\n");
    }
    else{
        printf("Target Element found at index %d\n",ans);
    }
}