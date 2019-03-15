#include <stdio.h>

bool IsPrime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int i = 1;
	for (i = 1; i <= 100; i++) {
		if (IsPrime(i)) {
			printf("%d ", i);
		}
	}
}
