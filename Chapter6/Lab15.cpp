#include <stdio.h>

int IsLeapYear(int year) {
	if ((year % 4) == 0) {
		if ((year % 100) == 0) {
			if ((year % 400) == 0) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 1;
		}
	}
	else {
		return 0;
	}
}

int main() {
	int year = 0;
	int isLeapYearFlag = 0;
	printf("�⵵�� �Է��ϼ���: ");
	scanf_s("%d", &year);
	isLeapYearFlag = IsLeapYear(year);
	printf("IsLeapYear�� ���ϰ��� %d�Դϴ�.", isLeapYearFlag);
	return 0;
}
