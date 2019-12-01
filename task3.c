#include <stdio.h>
main()
{
	int s1,s2,s3,sum;
	float avg;
	printf("enter the marks in 3 subjects: ");
	scanf("%d%d%d",&s1,&s2,&s3);
	sum=(s1+s2+s3);
	avg=sum/3;
	printf("\nThe sum is %d\n",sum);
	printf("The avegrage is %f",avg);
}
