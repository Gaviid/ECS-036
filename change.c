#include <stdio.h>

int main(){
	
	int a= 0;
	int hundred, fifty, twenty, ten, five, one;
	
	printf("Please enter the amount of money you wish to withdraw: ");
	
	scanf("%d", &a);

	
	
	hundred = a / 100;
	
	a = a - hundred * 100;
	
	fifty = a / 50;
	
	a = a - fifty * 50;
	
	twenty = a / 20;
	
	a = a - twenty * 20;
	
	ten = a / 10;
	
	a = a - ten * 10;
	
	five = a / 5;
	
	a = a - five * 5;
	
	one = a;


	
	printf("You receive %d hundred(s)\n", hundred);
	
	printf("You receive %d fifity(s)\n", fifty);
	
	printf("You receive %d twenty(s)\n", twenty);
	
	printf("You receive %d ten(s)\n", ten);
	
	printf("You receive %d five(s)\n", five);
	
	printf("You receive %d one(s)\n", one);


}
