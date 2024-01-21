#include<stdio.h>
void main()
{
	int n,r,rev=0,n1;
	printf("Enter any number:\n");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(n1==rev)
	printf("Number is not palidrome");
	// 17+71=88//
}
