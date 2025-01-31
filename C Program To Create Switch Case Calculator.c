#include <stdio.h>
int main(void)
{
	int a, b, result;
	char calculator;
/*	Printf("Enter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number : ");
	scanf("%d",&b);*/
	printf("Calculator\n");
	scanf("%d%c%d",&a,&calculator,&b);
switch (calculator)	
{
	case '+':
	result = a+b;
	break;
	case '-':
	result = a-b;
	break;
	case '*':
	result = a*b;
	break;
	case '/':
	result = a/b;
	break;
}
printf("Result = %d",result);
    return 0;
}








