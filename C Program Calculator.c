#include<stdio.h>

int main()
{
	//Our First Calculator in C
	
	// Declaring Variables in C
	int FirstNumber=10;
	int SecondNumber=20;
	int add, sub, mul, div, mod;
	
	// Calculating
	add = FirstNumber + SecondNumber;
	sub = FirstNumber - SecondNumber;
	mul = FirstNumber * SecondNumber;
	div = FirstNumber / SecondNumber;
	mod = FirstNumber % SecondNumber;
	
	printf("The Sum is %d\n",add);
	printf("The Sub is %d\n",sub);
	printf("The Mul is %d\n",mul);
	printf("The Div is %d\n",div);
	printf("The Mod is %d\n",mod);
   
   return 0;
   
}
