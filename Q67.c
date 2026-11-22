#include <stdio.h>

int max(int ar[],int n){
	int i,max = ar[0];
	
	for(i=0;i<n;i++){
		if(ar[i] > max){
			max = ar[i];
		}
	}
	
	return max;
	
}

int main(){
	
	int a[20],n,i;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	for(i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Maximum Value :",max(a,n));
	
}
