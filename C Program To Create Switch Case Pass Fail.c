#include <stdio.h>
int main()
{
	/*Local variable definition*/
	char grade='B';
	switch (grade)
	{
		case 'A':
			printf("\tExcellent!\n");
			break;
		case 'B':
			printf("\tVery Good\n");
			break;
		case 'C':
			printf("\tWell Done\n");
			break;
		case 'D':
			printf("\tYou Passed\n");
			break;
		case 'F':
			printf("\tBetter Try Again\n");
			break;
		Default:
			printf("\tInvalid Grade\n");
		}
		printf("\tYour Grade is %c\n",grade);
return 0;
}

