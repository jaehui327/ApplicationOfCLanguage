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
	printf("�Ǽ� ���� �Է��ϼ���: ");
	scanf_s("%lf", &num);

	intiger = Round(num);
	printf("�ݿø��� ���� %d �Դϴ�.", intiger);

	return 0;
}

