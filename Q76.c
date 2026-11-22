#include <stdio.h>
#include <string.h>

int main(){
	char str[30],temp;
	
	printf("Enter the string :");
	fgets(str,sizeof(str),stdin);
	
	int n = strlen(str),i;
	
	for(i=0;i<n/2;i++){
		temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
	
	fputs(str,stdout);
	
}
