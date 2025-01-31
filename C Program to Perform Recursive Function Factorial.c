#include<stdio.h>
// Recursion : Call to same function, Afule afulai call garxa
/*
0!=1
1!=1*0!=1
2!=2*1
5!=5*4*3*2*1
*/
int main()
{
	int nums=5;
	printf("The Factorial is%d",factorial(nums));
   return 0;  
}
int factorial(int num){
	if (num==1){
		return 1;
	}
	return(num * factorial (num-1));
	// 5*4!, 4*3!, 3*2!, 2*1!
}
