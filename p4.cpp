#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,ch;

    
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("enter\n");
	printf("1.for addition\n");
	printf("2.for subtraction\n");
	printf("3.for multiplication\n");
	printf("4.for division\n");
    printf("enter you choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("sum=%d",a+b);
            break;
        case 2:
            printf("differ=%d",a-b);
            break;
        case 3:
            printf("multiply=%d",a*b);
            break;
        case 4:
            printf("div=%d",a/b);
            break;
        default:
            printf("error");      
    }
    return 0;
}
