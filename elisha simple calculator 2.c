#include <stdio.h>).
int main()
{
	
	double num1;
	double num2;
	char symbol;
	
	printf("Enter a number:");
	scanf("%lf", &num1);
	printf("Enter a symbol:");
	scanf(" %c", &symbol);
	printf("Enter a number:");
	scanf("%lf", &num2);
 if (symbol == '+') {
 	printf("%f", num1 + num2 );}
	 
 	else if (symbol == '-') {
		 printf("%f", num1 - num2);
	 }
	  else if (symbol == '/') {
		 printf("%f", num1 / num2);
 }
	else if (symbol == '*') {
		 printf("%f", num1 * num2);}
		 else {
			 printf("invalid Input");
		 }
	
	return 0;
}