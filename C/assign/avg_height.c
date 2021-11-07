#include<stdio.h>
#define ARRSIZE 20 
void main()
{
	int arr[ARRSIZE];
	int n,i,sum=0;
	printf("Enter how many height values you are going to give\n");
	scanf("%d",&n);
	printf("Enter your %d values\n",n);
	for(i =0;i<n;i++){
		scanf("%d",&(arr[i]));
		sum += arr[i];
	}
	printf("Your height values are\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("The average of the height value is %d\n",sum/n);
}
