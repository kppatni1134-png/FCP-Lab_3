#include <stdio.h>

int fibo(int n){
	int a = 1,b = 0,c,i;
	
	for(i = 0;i<=n;i++){
		printf("%d",b);
		c = a;
		a = a+b;
		b = c;
		
	}

	
}

int main(){
	
	int n;
	scanf("%d",&n);
	
	fibo(n);
	
	
	
}
