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
	printf("x�� y���� x,y�� �Է��ϼ��� (ex 2.5 4) : ");
	scanf_s("%lf %lf", &x, &y);
	printf("%lf�� %lf���� ���� %lf�Դϴ�.", x, y, Power(x, y));
	return 0;
}

