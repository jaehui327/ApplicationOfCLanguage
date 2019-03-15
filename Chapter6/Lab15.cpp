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
	printf("년도를 입력하세요: ");
	scanf_s("%d", &year);
	isLeapYearFlag = IsLeapYear(year);
	printf("IsLeapYear의 리턴값은 %d입니다.", isLeapYearFlag);
	return 0;
}
