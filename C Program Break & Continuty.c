#include<stdio.h>
/*
Break: Break the entire loop; Continue: Bypass
*/
int main()
{
	int i;
	for(i=1; i<=100; i++){
	printf("%d\n",i);
	if(i==10){
		continue;
	}


}
return 0;
}
