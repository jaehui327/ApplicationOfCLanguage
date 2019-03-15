#include <stdio.h>
int GetRectWidth(int x1, int x2) {
	if (x1 > x2) {
		return x1 - x2;
	}
	else if (x1 < x2) {
		return x2 - x1;
	}
	else {
		printf("�簢���� �ƴմϴ�.\n");
		return 0;
	}
}

int GetRectHeight(int y1, int y2) {
	if (y1 > y2) {
		return y1 - y2;
	}
	else if (y1 < y2) {
		return y2 - y1;
	}
	else {
		printf("�簢���� �ƴմϴ�.\n");
		return 0;
	}
}

int GetRectArea(int width, int height) {
	return width * height;
}

int GetRectPerimeter(int width, int height) {
	return 2 * (width + height);
}

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	int width = 0, height = 0;
	printf("x1, y1 ���� �Է��ϼ���(ex 1 3): ");
	scanf_s("%d %d", &x1, &y1);
	printf("x2, y2 ���� �Է��ϼ���(ex -3 -2): ");
	scanf_s("%d %d", &x2, &y2);
	width = GetRectWidth(x1, x2);
	height = GetRectHeight(y1, y2);
	printf("���� ���̴� %d, ���� ���̴� %d�Դϴ�. \n", width, height);
	printf("���̴� %d, �ѷ��� %d�Դϴ�.\n", GetRectArea(width, height), GetRectPerimeter(width, height));
}
