#include <stdio.h>
#include "calc.h"

int div(void){
	int num1, num2 ,result;
	printf("Enter two numbrs .../...\n");
	scanf("%d %d", &num1, &num2);
	result = num1 / num2;
	printf("%d / %d = %d\n",num1, num2, result);
	return result;
}
