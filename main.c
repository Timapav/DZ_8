#include "calc.h"
#include <stdio.h>

int main(){
	int variant = 0;
	
	do {
		printf("1) Сложение\n");
		printf("2) Вычитание\n");
		printf("3) Умножение\n");
		printf("4) Деление\n");
		printf("5) Выход\n");
		printf(">");
		
		scanf("%d", &variant);
		
		switch (variant){
			case 1:
				add();
				break;
			
			case 2:
				sub();
				break;
			
			case 3:
				mul();
				break;
			
			case 4:
				div();
				break;
		}
	}while (variant != 5);
	
	return 0;
}
