#include <stdio.h>
#include <string.h>
int main()
{
	char str[20],str1[20];
	int i,l,h,a=0;
	printf("enter a string");
	gets(str);
	l=0;
	h=strlen(str)-1;
	while(h>l)
	{
		if(str[l]!=str[h])
		{
			printf("it is not a palindrome");
			a++;
			break;
		}
		h--;
		l++;
	}
	if(a==0)
	{
		printf("it is a palindrome");
	}
	return 0;
}
