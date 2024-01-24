#include <stdio.h>

int main ()
{
	int age;
	float gpa;
	char grade;

	printf("What is your age? \n");
	scanf("%i", &age);

	printf("What is your gpa? \n");
	scanf("%f", &gpa);

	printf("What is your letter grade? \n");
	scanf(" %c", &grade);

	printf("%i, %f, %c \n", age, gpa, grade);

	return 0;

}
