#include<stdio.h>
/*
Function: A Set of task perform certain operation.
int- data type
{
function body
return returnvalue;
}
*/
float GetInterest(float p, float t, float r) 
// function for finding simple interest
{
    float interest = (p * r * t)/100; // formula
    return interest; // returning yhe value of si
}
 int main()
{
    float p1,t1,r1;
    float interest;
    printf("Enter Principal :\n");
    scanf("%f",&p1);
    printf("Enter year:\n");
    scanf("%f",&t1);
    printf("Enter Rate:\n");
    scanf("%f",&r1); 
	// taking all 3 values p,t and rate
   float i = GetInterest(p1,t1,r1); 
   // passing value in function
    printf("Simple Interest = %f\n", i); 
	//output

    return 0;
}
