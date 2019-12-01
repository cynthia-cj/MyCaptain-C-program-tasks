#include <stdio.h>
struct book
{
	char title[50];
	char author[50];
	char genre[50];
};
void display (struct book);
int main()
{
	struct book b;
	printf("enter the title, author name and genre of the book");
	gets(b.title);
	gets(b.author);
	gets(b.genre);
	display(b);
	return 0;
}
void display (struct book b)
{
	printf("book details: \n");
	printf("book name: ");
	puts(b.title);
	printf("author name: ");
	puts(b.author);
	printf("book genre: ");
	puts(b.genre);
}
