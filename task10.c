#include <stdio.h>
int main()
{
	int i,j,a=0,n=5,t;
	for(i=1;i<=5;i++)
	{
		t=i-a;
		for(j=n;j>0;j--)
		{
			printf("%d",t);
			t++;
		}
		a++;
		n--;
		printf("\n");
	}
	return 0;
}
