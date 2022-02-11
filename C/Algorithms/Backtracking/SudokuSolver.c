#include<stdio.h>
#define N 9


void printBoard(int board[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf(" %d ",board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


int isSafe(int board[N][N], int row, int col, int number){
	for(int i=0;i<N;i++){
		if(board[i][col] == number){
			return 0;
		}
	}
	for(int i=0;i<N;i++){
		if(board[row][i] == number){
			return 0;
		}
	}
	int n = 3; //Since to check for the individual 3 X 3 boxes
	int rowStart = row - row % n;
	int colStart = col - col % n;
	
	for(int r = rowStart;r < rowStart + n;r++){
		for(int c = colStart;c < colStart + n;c++){
			if(board[r][c] == number){
				return 0;
			}
		}
	}
	return 1;
}


int SudokuSolver(int board[N][N]){
	int empty = 1;
	int row = -1;
	int col = -1;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(board[i][j] == 0){
				row = i;
				col = j;
				empty = 0;
				break;
			}
		}
		if(!empty){
			break;
		}
	}
	if(empty){
		return 1;
	}
	for(int num = 1;num<=9;num++){
		if(isSafe(board,row,col,num)){
			board[row][col] = num;
			if(SudokuSolver(board)){
				return 1;
			}
			else{
				board[row][col] = 0;
			}
		}
	}
	return 0;	
}
	

void main(){
	/*int board[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			board[i][j] = 0;
		}
	}*/
	
	int board[N][N] = { 
			{3, 0, 6, 5, 0, 8, 4, 0, 0}, 
        		{5, 2, 0, 0, 0, 0, 0, 0, 0}, 
        		{0, 8, 7, 0, 0, 0, 0, 3, 1}, 
        		{0, 0, 3, 0, 1, 0, 0, 8, 0}, 
        		{9, 0, 0, 8, 6, 3, 0, 0, 5}, 
        		{0, 5, 0, 0, 9, 0, 6, 0, 0}, 
        		{1, 3, 0, 0, 0, 0, 2, 5, 0}, 
        		{0, 0, 0, 0, 0, 0, 0, 7, 4}, 
        		{0, 0, 5, 2, 0, 6, 3, 0, 0} 
        };
         
	printf("Displaying the Sudoku\n");
	printBoard(board);
	printf("Displaying the Result\n");
	int ans = SudokuSolver(board);
	if(ans){
		printBoard(board);
	}
}
