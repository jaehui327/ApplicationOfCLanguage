#include <stdio.h>

void Absolute(double x) {
	if (x > 0) {
		printf("%lf", x);
	}
	else if (x < 0) {
		printf("%lf", -x);
	}
	else {
		printf("0");
	}
}

int main() {
	double num = 0;
	printf("실수 값을 입력하세요: ");
	scanf_s("%lf", &num);
	Absolute(num);
	return 0;
}
