#include<stdio.h>
/*
Function: A Set of task perform certain operation.
int- data type
return_data_type Function_name (data_type_arguments)
{
function body
return returnvalue;
}
Categories of functions:
-> Functions without arguments and without return values.
-> Functions without arguments and with return values.
-> Functions with arguments and without return values.
-> Functions with arguments and with return values.
*/
void printName();  //Void: not return any value.
int main()
{
	printName();   //Function Call
   return 0;
}

void printName(){   //Function Body
	printf("Amrit Karki\n");
}

/* Void does'nt accept parameters.*/

