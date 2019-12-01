#include <stdio.h>
main()
{
	int age,phone;
	char name[20];
	printf("enter your name: ");
	scanf("%s",&name);
	printf("\nenter your age and phone number");
	scanf("%d%d",&age,&phone);
	printf("your name is %s.\nYour age is %d\nYour phone number is %d",name,age,phone);
}
