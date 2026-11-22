#include <stdio.h>

int main(){
	
	int i = 0;
	char str[100];
	
	printf("Enter the string :");
	gets(str);
	
	while(str[i] != '\0'){
		i++;
	}
	
	printf("Lenght of string is %d",i);
	
}
