#include <stdio.h>

double dummy = 12.34;

int main() {
	double dummy = 56.78;

	if (dummy > 20) {
		double dummy = 16.25;
		dummy++;
		printf("dummy = %f\n", dummy);
	}
	return 0;
}
