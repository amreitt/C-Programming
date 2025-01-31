#include <stdio.h>
int main()
{
	/*Local variable definition*/
	int number = 0;
	printf("Enter the Number: ");
	scanf("%d",&number);
	switch (number)
	{
		case '10':
			printf("Number is equal to 10\n");
			break;
		case '50':
			printf("Number is equal to 50\n");
			break;
		case '80':
			printf("Number is equal to 80\n");
			break;
		case '100':
			printf("Number is equal to 100\n");
			break;
		case '200':
			printf("Number is equal to 200\n");
			break;
		Default:
			printf("Number not equal to 10,50,80,100,200");
		}
return 0;
}

