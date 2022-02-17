#include<stdio.h>

void main(){
    int arr[] = {2, 1, 5, 6, 3, 7};
    int *p = arr;
    printf("Printing array using pointer\n");
    // for(int i=0;i<6;i++){
    //     printf("%d ",*(p+i));
    // }
    // printf("\n");

    // for(int i=0;i<6;i++){
    //     printf("%d ",*(p));
    //     p++;
    // }
    // printf("\n");
    
    for(int i=0;i<6;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");

    printf("Printing the address of the array elements\n");
    for(int i=0;i<6;i++){
        printf("%d\n",p);
        p++;
    }
}