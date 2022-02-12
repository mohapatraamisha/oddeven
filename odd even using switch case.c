#include<stdio.h>
int main()
{
	int a,check;
	printf("Enter a number");
	scanf("%d",&a);
	check=a%2;
	switch(check){
		case 0 :
			printf("your number is even");
			break;
		default:
			printf("your number is odd");
				
				}
return 0;				
    	
}