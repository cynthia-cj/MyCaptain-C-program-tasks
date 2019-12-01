#include <stdio.h>
int main()
{
	int arr[10],i,n,min,max;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("\nenter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("the smallest element is %d\n",min);
	printf("the largest element is %d\n",max);
	return 0;
}
