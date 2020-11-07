/*
Programmer: Monish Kumar Bairagi
Program:	1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, ...
			Calculate nth term of the above series.
*/
#include<Stdio.h>
int prime(int n){
	int i=2,c=1;
	while(1){
		int j=2;
		while(j<i){
			if(i%j==0){
				break;
			}
			j++;
		}
		if(j==i){
			if(c==n){
				return j;
			}
			c++;
		}
		i++;
	}
}

int fibonacci(int n) { // recursive function of fibbonacci series
   if(n<=1){ // base condition
    	return n;
	}
	return fibonacci(n-1) + fibonacci(n-2); 
} 

void main(){
	int n,r;
	printf("Enter The Value Of N: ");
	scanf("%d",&n);
	if(n%2==0){
		r = prime(n/2); // when n is even
	} else{
		r = fibonacci(n/2+1); // when n is odd
	}
	printf("Output: %d\n",r);
}

