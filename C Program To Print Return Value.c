#include <stdio.h>
//Print Elements Stored in the array
int main()
{
	int values[5];
// taking input and storing in array
	Printf("Enter 5 number:");
	for (int i = 0; i < 5; ++i)
	{
	scanf("%d", &values[i]);
	}
	printf("Displaying Numbers:");

//printing elements of an array
for (int i = 0; i < 5; ++i){
	printf("%d\n:",values[i]);
	}
	
	return 0;
}
