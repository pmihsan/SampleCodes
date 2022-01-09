#include<stdio.h>
#define N 2
int ans = 0;

void printBoard(int board[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int isValidPos(int row, int col){
	if(row >= 0 && row < N && col >= 0 && col < N){
		return 1;
	}
	return 0;
}

int isSafe(int board[N][N], int row, int col){
	if(isValidPos(row-2, col-1) && board[row-2][col-1]){
		return 0;
	}
	if(isValidPos(row-1, col-2) && board[row-1][col-2]){
		return 0;
	}
	if(isValidPos(row-1, col+2) && board[row-1][col+2]){
		return 0;
	}
	if(isValidPos(row-2, col+1) && board[row-2][col+1]){
		return 0;
	}
	return 1;
}


void nKnights(int board[N][N], int row, int col, int knights){
	if(knights == 0){
		printBoard(board);
		ans++;
		return;
	}
	int count = 0;
	if(row == N-1 && col == N){
		return;
	}
	if(col == N){
		nKnights(board, row+1, 0, knights);
		return;
		
	}
	if(isSafe(board, row, col)){
		board[row][col] = 1;
		nKnights(board, row, col+1, knights-1);
		board[row][col] = 0;
	}
	nKnights(board, row, col+1, knights);
}
	

void main(){
	int board[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			board[i][j] = 0;
		}
	}
	printf("Displaying the results\n");
	nKnights(board, 0, 0, N);
	printf("No of ways to place %d Knights in %d X %d is %d\n",N,N,N,ans);
	
}
