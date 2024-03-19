/*
 ============================================================================
 Задача 1. Наибольшее из пяти чисел
 Задача 2. Наименьшее из пяти чисел
 Задача 3. В порядке возрастания
 Задача 4. Какое время года
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, num3, num4, num5, max, min;
	printf("Input 5 numbers: ");
	scanf("%d%d%d%d%d", &max, &num2, &num3, &num4, &num5);
	min = max;
	if (max < num2) {
		max = num2;
	} else if (min > num2) {
		min = num2;
	}
	if (max < num3) {
		max = num3;
	} else if (min > num3) {
		min = num3;
	}
	if (max < num4) {
		max = num4;
	} else if (min > num4) {
		min = num4;
	}
	if (max < num5) {
		max = num5;
	} else if (min > num5) {
		min = num5;
	}
	printf("max = %d, min = %d\n", max, min);

	printf("Input 3 numbers: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf(num1 <= num2 && num2 <= num3 ? "YES\n" : "NO\n");


	int month;
	printf("Input month number: ");
	scanf("%d", &month);
	if (month >=3 && month <=5) {
		printf("spring\n");
	} else if (month >=6 && month <=8){
		printf("summer\n");
	} else if (month >=9 && month <=11) {
		printf("autumn\n");
	} else if (month > 12 || month <1) {
		printf("Incorrect number - %d\n", month);
	} else {
		printf("winter\n");
	}

	return 0;
}
