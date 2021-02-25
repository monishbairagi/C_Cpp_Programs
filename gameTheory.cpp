/*
Program: Gamr Theory
Programmer: Monish Kumar Bairagi
*/
#include<iostream>

int Game(int a[10],int l,int r){
	if(l+1==r)
		return max(a[l],a[r]);
	return max(a[l]+min(Game(a,l+2,r)+Game(a,l+1,r-1)),
			   a[r]+min(Game(a,l+1,r-1)+Game(a,l,r-2))
	 	);
}

int main(){
	int a[10],n; cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	Game(a,0,n-1); //
}
