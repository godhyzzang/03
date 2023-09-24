#include <stdio.h>


int main(int argc, char *argv[]) {
	// printf("Enter a float : ");
	int i=0;
	float f = 0.0;

	printf("enter an integer\n");

	//scanf_s("enter an integer : %d", &i);
	scanf_s("%d", &i);

	printf("enter a float\n");
	//scanf_s("enter a float number : %f", &f);
	scanf_s("%f", &f);
	

	printf("integer number : %d, float number : %f", i, f);
	return 0;
}