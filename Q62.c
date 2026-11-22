#include <stdio.h>

int armstrong(int n){
	
	int sum,q,temp = n;
	
	while(n!=0){
		q = n%10;
		sum+=q*q*q;
		n/=10;
	}
	
	n = temp;
	
	if(sum == n){
		printf("Armstrong");
	}else{
		printf("Non Armstrong");
	}
	
}

int main(){
	
	armstrong(153);
	
}
