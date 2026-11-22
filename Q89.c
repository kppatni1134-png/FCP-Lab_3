#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p,*q,n,i = 0;
	
	printf("lenght of array");
	scanf("%d",&n);
	
	p = malloc(sizeof(int)*n);
	q = malloc(sizeof(int)*n);
	
	while(i < n){
		scanf("%d",p+i);
		i++;
	}
	
	for(i = 0;i<n;i++){
		*(q+i) = *(p+n-i-1);
	}
	
	for(i = 0;i<n;i++){
		printf("%d",*(q+i));
	}
	
	free(p);
	
	free(q);
	
	
}
