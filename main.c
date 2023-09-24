#include <stdio.h>


int main(void) {
	char ch;

	printf("enter a letter : ");
	scanf_s("%c",&ch); 

	char next_ch = ch + 1;
	printf("The next letter is %c\n" ,  next_ch);


	return 0;
}