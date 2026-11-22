#include <stdio.h>

int main(){
	char str1[20],str2[20],str3[40];
	int i = 0,j=0,count = 0;
	
	printf("Enter the string 1 :");
	gets(str1);
	
	printf("Enter the string 2 :");
	gets(str2);
	
	
	while(str1[i] != '\0'){
		count++;
		i++;
	}
	i = 0;
	
	while(str1[i] != '\0' || str2[j] != '\0'){
		
		if(str1[i] != '\0'){
		str3[i] = str1[i];
	}
		
		if(str2[j] != '\0'){
			str3[count +j+1] = str2[j];
			j++;
		}
		i++;	
	}
	str3[count] = ' ';
	str3[count+j+1] = '\0';
	
	puts(str3);
	
	
}
