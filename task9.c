#include <stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter the factorial you want to find");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d! = %d",n,fact);
	return 0;
}
