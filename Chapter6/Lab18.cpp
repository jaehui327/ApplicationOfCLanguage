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
		printf("IsUpper�� ��ȯ���� %d�Դϴ�.", IsUpper(c));
		return 1;
	}
	else if (IsLower(c)) {
		printf("IsLower�� ��ȯ���� %d�Դϴ�.", IsLower(c));
		return 1;
	}
	else {
		printf("IsUpper�� ��ȯ���� %d�Դϴ�.", IsUpper(c));
		printf("IsLower�� ��ȯ���� %d�Դϴ�.", IsLower(c));
		return 0;
	}
}

int main() {
	char character = '0';
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%c", &character);
	printf("IsAlphabetic�� ��ȯ���� %d�Դϴ�.", IsAlphabetic(character));
	return 0;
}
