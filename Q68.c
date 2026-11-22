#include <stdio.h>

struct book{
	char name[20];
	char writer[20];
	int page;
	int price;
	
}b;

void write(){
	printf("write book name :");
	fgets(b.name,sizeof(b.name),stdin);
	printf("write book writer name :");
	fgets(b.writer,sizeof(b.writer),stdin);
	printf("write book page :");
	scanf("%d",&b.page);
	printf("write book price :");
	scanf("%d",&b.price);
}
void display(){
	printf("\n Book Information \n");
	printf("Book's Name :'");
	fputs(b.name,stdout);
	printf("Writer's Name :");
	fputs(b.writer,stdout);
	printf("Total pages :%d\n",b.page);
	printf("Book's price :%d",b.price);
}

int main(){
	write();
	display();
}
