#include<stdio.h>
void main()
// factorial of a number//
{
	int n,i=1,f=1;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("factorial=%d",f);
	
}
