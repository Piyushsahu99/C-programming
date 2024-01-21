#include<stdio.h>
void main()
{
	// Armstrong number= (1)^3+(2)^3+(3)^3=153==1+125+27.// 
	
	
int n,s=0,n1,r;
printf("Enter any number");
scanf("%d",&n);
n1=n;
while(n>0)
{
	r=n%10;
	s=s+r*r*r;
	n=n/10;
	}	
	if(n1==s)
	printf("Number is Armstrong");
	else
	printf("Number is not Armstrong");
}
