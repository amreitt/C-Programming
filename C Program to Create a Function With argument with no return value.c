#include <stdio.h>
/*Area Of Square using Function with arguments and no return values */
void area(int square_side);
int main()
{
	int square_side;
	printf("\nEnter the sides of square:");
	scanf("%d",&square_side);
	area(square_side); //Function Call
	return 0;
}
void area(int square_side)
{
	int square_area;
	square_area=square_side*square_side;
	printf("Area Of Square=%d",square_area);
}
