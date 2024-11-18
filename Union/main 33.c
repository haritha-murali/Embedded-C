#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

union address{
	uint8_t shortAdd;
	uint16_t longAdd;
};
union address data;
int size;

int main()
{
	data.longAdd = 0xABCD;
	printf("data.longAdd = %#x\n", data.longAdd);
	data.shortAdd = 0xFE;

	printf("data.shortAdd = %#x\n", data.shortAdd);
	printf("data.longAdd = %#x\n", data.longAdd);

	printf("size = %d\n", sizeof(data));
	return 0;
}
