#include <stdio.h>


int main(void) {
	char c;
	int i;

	printf("enter a letter (to be converted to a number) : ");
	scanf_s("%c",&c);

	i = c - '0';
	printf("The input number is %i\n" , i);

	return 0;
}