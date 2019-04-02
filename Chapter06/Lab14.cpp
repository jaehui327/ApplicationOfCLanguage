#include <stdio.h>

int Round(double x) {
	if (x >= 0) {
		x += 0.5;
		x = (int)(x * 10);
		x = x / 10;
		return x;
	}
	else {
		x -= 0.5;
		x = (int)(x * 10);
		x = x / 10;
		return x;
	}
}

int main() {
	double num = 0;
	int intiger = 0;
	printf("실수 값을 입력하세요: ");
	scanf_s("%lf", &num);

	intiger = Round(num);
	printf("반올림한 값은 %d 입니다.", intiger);

	return 0;
}

