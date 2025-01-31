#include<stdio.h>

/*
WAP in C, which swaps two variables.

Glass A = Water, Glass B = Milk
Glass A = Milk, Glass B = Water

Glass C = Glass A

Glass A = Milk
Glass B = Water

*/

int main()
{
	// Declaring Variable
	int a = 10;
	int b = 20;
	int c;
	// Calculation to Swap
	c = a;
	a = b;
	b = c;
	
	//Print Value

	printf("The Value of a is: %d.\n",a);
	printf("The Value of b is: %d.\n",b);
   return 0;
   
}
