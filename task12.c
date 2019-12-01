#include <stdio.h>
int main()
{
	int n;
	float c,f,temp;
	printf("1.celsius to farenheit\n2.farenheit to celsius\n3.exit\n");
	printf("enter your choice ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter the temperature in celsius");
			scanf("%f",c);
			temp=(c*9/5)+32;
			printf("the temperature is %f degree farenheit",temp);
			break;
		case 2:
			printf("enter the temperature in farenheit");
			scanf("%f",&f);
			temp=(f-32)*5/9;
			printf("the temperature is %f degree celsius");
			break;
		case 3:
		    printf("you chose to exit");
			break;
		default:
		    printf("invalid choice");		
	}
	return 0;	
}
