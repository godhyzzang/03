#include <stdio.h>


int main(void) {
	float a,b,result;

	printf("enter first number : ");
	scanf_s("%i",&a); 

	printf("enter second number : ");
	scanf_s("%i", &b);

	//result = float(a) / float(b);
	result =a/b;

	printf("The dividing result  is %f \n" ,  result);


	return 0;
}