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

int GetDaysOfMonth(int year, int month) {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		return 31;
	}
	else {
		if (month == 2) {
			if (IsLeapYear(year) == 1) {
				return 29;
			}
			else {
				return 28;
			}
		}
		else {
			return 30;
		}
	}
}

int main() {
	int year = 0;
	int month = 0;
	int days = 0;
	printf("년도와 날짜를 입력하세요(ex 2019 3) : ");
	scanf_s("%d %d", &year, &month);
	days = GetDaysOfMonth(year, month);
	printf("%d년 %d월의 날짜 수는 %d일입니다.", year, month, days);
	return 0;
}
