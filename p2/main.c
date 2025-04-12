#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;
	int t = 0;
	int sum = 2;

	while (a + b < 4000000) {
		t = a + b;
		if (t % 2 == 0) sum += t;
		a = b;
		b = t;
	}
	printf("The sum of the even-valued terms of the Fibonacci-sequence below 4.000.000 is: %d\n", sum);
	return 0;
}
