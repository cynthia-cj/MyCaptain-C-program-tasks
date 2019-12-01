#include <stdio.h>
main()
{
	float cel,far;
	printf("enter the temperature in celsius: ");
	scanf("%f",&cel);
	far=((9*cel)/5)+32;
	printf("%f degree celsius equals %f degree fahrenheit",cel,far);
}
