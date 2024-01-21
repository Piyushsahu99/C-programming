#include<stdio.h>
#include<math.h>
void main()
{
	
	//Area of triangle//
	float a,b,c,S,Area;
	printf("Enter the sides of triangle:\n");
	scanf("%f%f%F",&a,&b,&c);
	S=a+b+c/2;
	Area=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("Area =%f",Area);
	
}
