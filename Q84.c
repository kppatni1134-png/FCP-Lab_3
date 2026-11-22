#include <stdio.h>
#include <string.h>

int main(){
	char str[30],temp,t[30];
	
	printf("Enter the string :");
	fgets(str,sizeof(str),stdin);
	
	int i = strlen(str),j = 0;
	
	i = i-1;
	
	while(i>=0){
		t[i] = str[j];
		j++;
		i--;
	}
	
	if(strcmp(str,t) == 0){
		printf("polindrome\n");
	}else{
		printf("non polindrome\n");
	}
	
	fputs(str,stdout);
	printf("\n");
	fputs(t,stdout);
	
	
	
}
