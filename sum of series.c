#include<stdio.h>
#include<math.h>
void main()
{
	int n,i=1,s=0;
	printf("Enter terms of series \n");
	scanf("%d",&n);
	while(i<=n)
	{
	s=s+pow(i,i);
	i++;
	}
	printf("Sum=%d",s);
	//s=1+2^2+3^3+4^4+5^5-----+n^n//

}
