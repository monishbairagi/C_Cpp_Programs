/*
Program: Find all paths in mxn grid
Programmer: Monish Kumar Bairagi
*/

#include<iostream>
using namespace std;

int path(int n,int m){
	if(n==1 || m==1) return 1;
	return path(n,m-1) + path(n-1,m);
}

int main(){
	int m,n;
	cin>>n>>m;
	cout<< path(n,m) <<endl;
	return 0;
}
