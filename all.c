#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,r;
	float d;

	printf("Enter any two number:\n\n");
	scanf(" %d %d",&a,&b,d);
	
{
		c=a+b;
	printf("sum = %d\n",c);

}{
	c=a-b;
	printf("sub= %d\n",c);
}{

	c=a*b;
	printf("multi= %d\n",c);

}{

	d=a/b;
	printf("div=%.4f\n",d);
	{
		r=a%b;
		printf("rem= %d\n",r);
	}

}
}
