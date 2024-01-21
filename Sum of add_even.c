#include<stdio.h>
void main()
{
	int i=1,Even_sum=0,Odd_sum=0;
	while(i<=100)
	{
		if(i%2==0)
		Even_sum=Even_sum+1;
		else
		Odd_sum=Odd_sum+i;
		i++;
	}
	printf("Even_sum=%d",Even_sum);
	printf("Odd_sum=%d",Odd_sum);
	
}
