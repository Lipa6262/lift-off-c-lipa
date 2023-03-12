#include<stdio.h>
#include<conio.h>
int main()
{
	float r,d,s,a;
	printf("enter the radius r:");
	scanf("%f",&r);
	d=2*r;
	printf("Diameter=%f\n",d);
	s=2*3.14*r;
	printf("circumference=%f\n",s);
	a=3.14*r*r;
	printf("area=%f",a);
}
