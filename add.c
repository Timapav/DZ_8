#include "calc.h"
#include <stdio.h>

int add(void){
	int num1, num2 ,result;
	printf("Enter two numbrs ...+...\n");
	scanf("%d %d", &num1, &num2);
	result = num1 + num2;
	printf("%d + %d = %d\n",num1, num2, result);
	return 0;
}
