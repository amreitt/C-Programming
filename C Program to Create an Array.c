//Array: It can store multiple values of same type in same variable
#include <stdio.h>
int main(){
int n=5;
float price[n];
int i;
for (i=0; i<n; i++){
	printf("Enter price for %dst Item:",i+1);
	scanf("%f",&price[i]);
}

for (i=0; i<n; i++){
	printf("Price %d is %f",i+1, price[i]);
}


return 0;
}
