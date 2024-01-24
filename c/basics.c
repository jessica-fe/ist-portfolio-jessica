#include <stdio.h>

int main()
{
	
	printf("this is my c basics file\n");   // write an output statement
	
	int num;   // type name;
		   // type name = value;
		   // int is integers (pos and neg numbers)  -  int num = (integer)
		   // float is decimals or fractions -  float average = (decimal)
		   // char is singular letters or symbols (a b + or even a singular number)  -  char grade = '\c'
	printf("please enter a number: ", num);   // prompt the user for a number
	scanf("%i", &num);   // store user input in num
	printf("your number was %i\n", num);

	return 0;


}
