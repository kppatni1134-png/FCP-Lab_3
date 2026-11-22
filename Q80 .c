#include <stdio.h>

void upper(char *p){
	
	while(*p != '\0'){
		if(*p>='a'&& *p<='z'){
			*p -= 32; 
		}
		p++;
	}
}
int main(){
	char str[30];
	int i = 0;
	
	printf("enter the string ");
	fgets(str,sizeof(str),stdin);
	
	upper(str);
	
	fputs(str,stdout);
	
	
}
