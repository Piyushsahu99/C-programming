#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("Enter any number \n");
	scanf("%d",&n);
	while(n>0)
	
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum=%d",s);
}
