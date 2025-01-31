#include<stdio.h>

int main()
{
	//Our First Calculator in C
	
	// Declaring Variables in C
	int FirstNumber, SecondNumber, add, sub, mul, div, mod;
	
	//Getting User input
	
	printf("Enter First Number:\n");
	scanf("%d",&FirstNumber);
	
	printf("Enter Second Number:\n");
	scanf("%d",&SecondNumber);
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
