#include<stdio.h>

void Knapsack(int n, float weight[], float profit[], float capacity){
	float x[n];
	for(int i=0;i<n;i++){
		x[i] = 0.0;
	}
	float u = capacity;
	float totalProfit = 0;
	int i;
	for(i = 0;i<n;i++){
		if(weight[i] <= u){
			x[i] = 1;
			totalProfit += profit[i];
			u -= weight[i];
		}
		else{
			break;
		}
	}
	if(i < n){
		x[i] = u/weight[i];
	}
	totalProfit += (x[i] * profit[i]);
	printf("Maximum Profit is %f\n",totalProfit);
	
	printf("The number of items include is \n");
	for(int i=0;i<n;i++){
		printf("%f\t",x[i]);
	}				
	printf("\n");
}

void main(){
	int n;
	printf("Enter the number of objects\n");
	scanf("%d",&n);
	float weight[n], profit[n], capacity;
	float ratio[n];
	for(int i=0;i<n;i++){
		ratio[i] = 0.0;
	}
	for(int i=0;i<n;i++){
	    printf("Enter weight and profit of %d item\n",i+1);
		scanf("%f %f",&weight[i],&profit[i]);
		ratio[i] = (profit[i]/weight[i]);
	}
	printf("Enter the capacity of the knapsack\n");
	scanf("%f",&capacity);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ratio[i] < ratio[j]){
				float temp = ratio[i];
				ratio[i] = ratio[j];
				ratio[j] = temp;
				
				temp = profit[i];
				profit[i] = profit[j];
				profit[j] = temp;
				
				temp = weight[i];
				weight[i] = weight[j];
				weight[j] = temp;
			}
		}
	}
	Knapsack(n,weight,profit,capacity);
}
	 
