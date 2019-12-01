#include <stdio.h>
#include <math.h>
int main()
{
	int num,n,rem,sum=0,t;
	printf("enter the number of digits");
	scanf("%d",&n);
	printf("enter the number");
	scanf("%d",&num);
	t=num;
	while(t!=0)
	{
		rem=t%10;
		t=t/10;
		sum=sum+pow(rem,n);
	}
	if(sum==num)
	{
		printf("it is an armstrong number");
	}
	else
	{
		printf("its not an armstrong number");
	}
	return 0;
}
