#include<stdio.h>

int area();  //Function Prototype
int main()
{
	int square_area();
	square_area=area();   //Function Call
	printf("Area of Square=%d",square_area);
   return 0;
}
int area()
{
	int square_area,square_side;
	printf("Enter the side of square:");
	scanf("%d",&square_side);
	square_area=square_side*square_side;
	return square_area;
}

