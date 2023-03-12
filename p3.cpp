#include<stdio.h>
#include<conio.h>
int main()
{
	int n,s,d=0;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	while(n!=0);
	printf("sum of digits=%d",s);
}
