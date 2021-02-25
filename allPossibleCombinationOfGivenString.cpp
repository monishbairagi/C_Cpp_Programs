/*
Program: Find all possible combination of a string
Programmer: Monish Kumar Bairagi
*/
#include<iostream>
#include<string>
using namespace std;

void allCom(string s,int l,int r){
	if(l==r){
		cout<<s<<endl;
		return;
	}
	for(int i=l;i<=r;i++){
		char t = s[l];
		s[l] = s[i];
		s[i] = t;
		
		allCom(s,l+1,r);
		
		t = s[l];
		s[l] = s[i];
		s[i] = t;
	}
}

int main(){
	string s; cin>>s;
	allCom(s,0,s.length()-1);
}
