#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d", &n);
	if(n % 2 == 0)
	printf("is even number.");
	else
	printf("is odd number.");
	
	return 0;
}