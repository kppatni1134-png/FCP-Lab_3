#include <stdio.h>
#include <string.h>

int main(){
	
	char str[20];
	int i;
	
	fgets(str,sizeof(str),stdin);
	
	for(i = 0;i<strlen(str);i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i] -= 32;
		}
	}
	
	fputs(str,stdout);
	
}
