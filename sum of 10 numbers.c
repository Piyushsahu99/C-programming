#include<stdio.h>
void main()
{
	int n,i=1,s=0;
	printf("Enter any 10 numbers\n");
	while(i<=10)
	{
		scanf("%d",&n);
		s=s+n;
		i++;
	}
	printf("Sum=%d",s);
}
