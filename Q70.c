#include <stdio.h>

void vowel(char ch){
	switch(ch){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("%c is Vowel",ch);
				 break;
		default:printf("%c is not Vowel",ch);
	}
}

int main(){
	char ch;
	
	scanf("%c",&ch);
	
	vowel(ch);
}
