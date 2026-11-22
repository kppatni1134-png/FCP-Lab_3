#include <stdio.h>

int polindrome(int n){
	
	int temp = n,sum = 0;
	
	while(n != 0){
		
		int q = n%10;
		sum = sum*10 + q;
		n/=10;
		
	}
	
	n = temp;
	
	if(sum == n){
		printf("polindrome");
	}else{
		printf("Non polidrome");
	}
	
}

int main(){
	
	polindrome(12321);
	
}
