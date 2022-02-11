#include<stdio.h>
#include<string.h>

int Max(int a, int b){
	return a > b ? a : b ;
}

int LCS(char x[], char y[], int m, int n){
	int lcs[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i == 0 || j == 0){
				lcs[i][j] = 0;
			}
			else if(x[i-1] == y[j-1]){
				 lcs[i][j] = 1 + lcs[i-1][j-1];
			}
			else{
				lcs[i][j] = Max(lcs[i-1][j], lcs[i][j-1]);
			}
		}
	}
	//For the printing the sequence
	int i = m, j = n;
	int index = lcs[m][n];
	
	char seq[index + 1];
	seq[index] = '\0';
	
	while(i >= 0 && j >= 0){
		if(x[i-1] == y[j-1]){
			seq[index-1] = x[i-1];
			i--;
			j--;
			index--;
		}
		else if(lcs[i-1][j] > lcs[i][j-1]){
			i--;
		}
		else{
			j--;
		}	
	}
	printf("The longest common Subsequence is %s\n",seq);
	return lcs[m][n];
}
		

void main(){
	char x[] = "abcdxy";
	char y[] = "acxy";
	int m = strlen(x);
	int n = strlen(y);
	int ans = LCS(x, y, m, n);
	printf("The length of longest common Subsequence is %d\n",ans);
}
