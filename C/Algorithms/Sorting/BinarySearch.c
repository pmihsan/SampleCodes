#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return ( *(int*)a - *(int*)b );
}

// int binarySearch(int arr[], int n, int target){

//     int s = 0;
//     int e = n - 1;

//     while(s <= e){
//         int m = s + (e - s)/2;

//         if(arr[m] == target){
//             return m;
//         }

//         else if(arr[m] > target){
//             e = m - 1;
//         }

//         else{
//             s = m + 1;
//         }
//     }
//     return -1;
// }

void main(){
    int arr[] = {23,12,45,67,34,56,89,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 11;

    qsort(arr, n, sizeof(int), compare);
    int *p;
    p = bsearch(&target, arr, n, sizeof(int), compare);
    // int ans = binarySearch(arr,n,target);
    
    if(p){
        printf("Target Element found\n");
    }
    else{
        printf("Target Element not found \n");
    }
}