#include <stdio.h>

double Power(double x, double y) {
	double result = 1;
	for (int i = 1; i <= y; i++) {
		result *= x;
	}
	return result;
}

int main() {
	double x = 0, y = 0;
	printf("x의 y승의 x,y를 입력하세요 (ex 2.5 4) : ");
	scanf_s("%lf %lf", &x, &y);
	printf("%lf의 %lf승의 값은 %lf입니다.", x, y, Power(x, y));
	return 0;
}

