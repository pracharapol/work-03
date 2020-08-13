#include<stdio.h>
int main() {
	int a, b;
	printf("Your Score :");
	scanf_s("%d", &a);
	if (a >= 80) {
		printf("You are grade 4");
		printf("\nPass");
	}
	else if ((a >= 75) && (a <= 79)) {
		printf("You ae grade 3.5");
		printf("\nPass");
	}
	else if ((a >= 70) && (a <= 74)) {
		printf("You are grade 3");
		printf("\nPass");
	}
	else if ((a >= 65) && (a <= 69)) {
		printf("You are grade 2.5");
		printf("\nPass");
	}
	else if ((a >= 60) && (a <= 64)) {
		printf("You are grade 2");
		printf("\nPass");
	}
	else if ((a >= 55) && (a <= 59)) {
		printf("You are grade 1.5");
		printf("\nPass");
	}
	else if ((a >= 50) && (a <= 54)) {
		printf("You are grade 1");
		printf("\nPass");
	}
	else if ((a >= 0) && (a <= 49)) {
		printf("You are grade 0");
		printf("\nFail");
	}
	return 0;

}