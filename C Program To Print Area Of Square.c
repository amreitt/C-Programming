#include<stdio.h>
void Area();  //Function Prototype
int main()
{
	Area();   //Function Call
   return 0;
}

void Area(){   //Function Body
int square_area, square_side;
printf("Enter The Side of square:\n");
scanf("%d",&square_side);
square_area=square_side*square_side;
printf("Area of Square=%d",square_area);
}



