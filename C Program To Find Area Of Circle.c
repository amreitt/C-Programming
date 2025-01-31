#include<stdio.h>
#define PI 3.14
int main()
{
 	//WAP IN C THAT FIND AREA OF CIRCLE PI*RSquare
	 	

	float radius, area;
	printf("Enter Radius:\n");
	scanf("%f",&radius);
   	
   	area = PI * radius * radius;
   	
   	printf("The area of circle is %.2f",area);
   	
   return 0;
   
}
