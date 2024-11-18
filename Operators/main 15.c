#include <stdio.h>

int main()
{
	int a = 25, b = 5;

	// using operators and printing results
	printf("a = b: %d\n", a = b);
	printf("a += b: %d\n", a += b);
	printf("a -= b: %d\n", a -= b);
	printf("a *= b: %d\n", a *= b);
	printf("a /= b: %d\n", a /= b);
	printf("a %%= b: %d\n", a %= b);
	printf("a &= b: %d\n", a &= b);
	printf("a |= b: %d\n", a |= b);
	printf("a >>= b: %d\n", a >>= b);
	printf("a <<= b: %d\n", a <<= b);

    return 0;
}
