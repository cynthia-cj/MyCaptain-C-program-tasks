#include <stdio.h>
main()
{
	char first[10],second[10],full[20];
	printf("enter your first name: ");
	scanf("%s",&first);
	printf("\nenter your second name: ");
	scanf("%s",&second);
	full=first second;
	printf("your name is %s",full);	
}
