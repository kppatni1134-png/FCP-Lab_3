#include <stdio.h>

int main(){
	char str[20],ch;
	int i =0,count = 0,found = 0;
	
	printf("enter the string ");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter the char:");
	scanf("%c",&ch);
	
	while(str[i] != '\0'){
		if(str[i] == ch){
			found = 1;
			count++;
		}
		i++;
	}
	
	if(found == 1){
		printf("Cher %c found %d times in string",ch,count);
	}else{
		printf("cher %c not found",ch);
	}
	
	
}
