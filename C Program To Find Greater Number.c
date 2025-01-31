#include<stdio.h>
/* 
If Else If

if(condition){
statement;
}else if(condition){
statement;
}else{
statement
}
*/
int main()  //Main function begins program execution
{
	int num1, num2, num3;
	printf("Enter the First Number:");
	scanf("%d",&num1);  //Stores first value entered
	printf("Enter the Second Number:");
	scanf("%d",&num2);
	printf("Enter the Third Number:");
	scanf("%d",&num3);
	//If Statement passesntest expression inside the parenthesis ()
	if(num1 > num2 && num1 > num3 ){
		printf("%d is Greater",num1);
	}
	else if(num2 > num1 && num2 > num3 ){
		printf("%d is Greater",num2);
	}
	else{
		printf("%d is Greater",num3);
	}
   return 0;
   
}
/* Generally, If statement used for passing true statements */
