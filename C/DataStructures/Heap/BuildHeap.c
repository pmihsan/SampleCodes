#include<stdio.h>
#include<math.h>
#define N 50

int arr[N];
int n;
int k;

void printHeap(){
        printf("Array Representation of Heap\n");
        for(int i=0;i<n;i++){
                printf("%d\t",arr[i]);
        }
        printf("\n");
}

void printSortedHeap(){
        printf("\nSorted Heap\n");
        for(int i=0;i<k;i++){
                printf("%d\t",arr[i]);
        }
        printf("\n");
}

void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

void heapify(int i){
	int largest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;
	if(left < n && arr[left] > arr[largest]){
		largest = left;
	}
	if(right < n && arr[right] > arr[largest]){
		largest = right;
	}
	if(largest != i){
		swap(&arr[i], &arr[largest]);
		heapify(largest);
	}
}

void insertHeap(int val){
	if(n >= N){
		printf("No Space\n");
		return;
	}
	printf("Inserting %d into the heap\n",val);
	arr[n++] = val;
	// Recursive Approach
	/*for (int i = n/2 - 1; i >= 0; i--)
    	{
      		heapify(i);
    	}
	printf("\n");*/
	
	
	//Iterative approach
	int i = n;
	int parent;
	while(i > 0){
		parent = i/2;
		if(arr[parent] < arr[i]){
			swap(&arr[i], &arr[parent]);
			i = parent;
		}
		else{
			return;
		}
	}
	printf("\n");
}


void buildHeap(){
        int startIndex = n/2 - 1;
        for(int i=startIndex;i>=0;i--){
                heapify(i);
        }
}

void deleteRoot(){
	printf("Deleting - %d\n",arr[0]);
	swap(&arr[0], &arr[n-1]);
	n--;
	heapify(0);
}

void main(){
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        k = n;
        printf("Enter the array elements\n");
        for(int i=0;i<n;i++){
        	scanf("%d",&arr[i]);
        }
        printf("\nHEAP DATA STRUCTURE\n");
        buildHeap();
        printHeap();
        
        insertHeap(34);
        k++;
        printHeap();
        printf("\n");
        
        /*deleteRoot();
        printHeap();*/
        
        //Max Heap so on deletion prints in Descending Order
        for(int i=0;i<k;i++){
        	deleteRoot();
        }
        
        //The sorted array gets stored in the same array as well
        printSortedHeap();
}
