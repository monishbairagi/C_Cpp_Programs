/*
Program: Implement a SUDOKU Solver
Programmer: Monish Kumar Bairagi
*/

#include<iostream>
using namespace std;

int size,board[50][50];

void printBoard(){
	cout<<endl;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<board[i][j]<<" ";
			if(j==size-1)
				cout<<endl;
		}
	}
}

bool isPossible(int row,int col,int val){
	for(int i=0;i<size;i++){
		if(board[row][i]==val || board[i][col]==val){
			return false;
		}
	}
	return true;
}

void solve(){
}

int main(){
	// code here
	int totalPresent; cin>>size>>totalPresent;
	
	// initializing the board elements with 0's
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			board[i][j]=0;
		}
	}
	
	for(int i;i<totalPresent;i++){
		int row,col,val; cin>>row>>col>>val;
		board[row-1][col-1]=val;
	}
	
	printBoard();
	return 0;
}
