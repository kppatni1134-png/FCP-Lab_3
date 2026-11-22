#include <stdio.h>



int swap(int n,int m){
	m = m^n;
	n = m^n;
	m = m^n;
	
	printf("X = %d\nY = %d",n,m);
	
}

int main(){
	int x,y;
	
	scanf("%d%d",&x,&y);
	
	swap(x,y);
	
	
}
