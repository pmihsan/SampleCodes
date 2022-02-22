#include<stdio.h>

void printLIS(int lis[], int arr[], int n){
    // int k = 1;
    printf("Displaying the Longest Increasing Subsequence\n");
    for(int i=0;i<n;i++){
        // if(lis[i] == k){
        //     printf("%d\t",arr[i]);
        //     k++;
        // }
        printf("%d\t",lis[i]);
    }
    printf("\n");
}

int lis(int arr[], int n){
    int LIS[n];
    LIS[0] = 1;
    int max = 1;

    for(int i=1;i<n;i++){
        LIS[i] = 1;
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j] && LIS[i] < LIS[j] + 1){
                LIS[i] = LIS[j] + 1;
            }
        }
        if(LIS[i] > max){
            max = LIS[i];
        }
    }
    printLIS(LIS,arr,n);
    return max;
}

void main(){
    // int arr[] = {3, 10, 2, 1, 20};
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    // int arr[] = {3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = lis(arr,n);

    printf("The longest Increasing Subsequence is %d\n",ans);
}