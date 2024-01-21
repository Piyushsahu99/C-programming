#include<stdio.h>
void main()
{
	// Febonacci series= 1,1,2,3,5,8,etc     1+1=2,2+3=5 //
	int i=1,a=0,b=1,c,n;
	printf("Enter any term of the series \n");
	scanf("%d",&n);
	printf("your fibonacci series\n");
	while(i<=n)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		i++;
		
		
	}
}
