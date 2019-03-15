#include <stdio.h>

int IsUpper(char c) {
	if (65 <= c && c <= 90) {
		return 1;
	}
	else {
		return 0;
	}
}

int IsLower(char c) {
	if (97 <= c && c <= 122) {
		return 1;
	}
	else {
		return 0;
	}
}

int IsAlphabetic(char c) {
	if (IsUpper(c)) {
		printf("IsUpper의 반환값은 %d입니다.", IsUpper(c));
		return 1;
	}
	else if (IsLower(c)) {
		printf("IsLower의 반환값은 %d입니다.", IsLower(c));
		return 1;
	}
	else {
		printf("IsUpper의 반환값은 %d입니다.", IsUpper(c));
		printf("IsLower의 반환값은 %d입니다.", IsLower(c));
		return 0;
	}
}

int main() {
	char character = '0';
	printf("문자를 입력하세요: ");
	scanf_s("%c", &character);
	printf("IsAlphabetic의 반환값은 %d입니다.", IsAlphabetic(character));
	return 0;
}
