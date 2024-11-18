#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Packet{
	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t longAddr	:8;
	uint32_t shortAddr	:2;
	uint32_t addrMode	:1;
};

struct Packet data;
long int input;
int size;

int main()
{
	printf("enter input = ");
	fflush(stdout);
	scanf("%lX",&input);

	data.crc = (uint32_t)input & 0x3;
	data.status = (uint32_t)(input >> 2) & 0x1;
	data.payload = (uint32_t)(input >> 3) & 0xFFF;
	data.bat = (uint32_t)(input >> 15) & 0x7;
	data.sensor = (uint32_t)(input >> 18) & 0x7;
	data.longAddr = (uint32_t)(input >> 21) & 0xFF;
	data.shortAddr = (uint32_t)(input >> 29) & 0x3;
	data.addrMode = (uint32_t)(input >> 31) & 0x1;

	printf("data.crc = %#x\n", data.crc);
	printf("data.status = %#x\n", data.status);
	printf("data.payload = %#x\n", data.payload);
	printf("data.bat = %#x\n", data.bat);
	printf("data.sensor = %#x\n", data.sensor);
	printf("data.longAddr = %#x\n", data.longAddr);
	printf("data.shortAddr = %#x\n", data.shortAddr);
	printf("data.addrMode = %#x\n", data.addrMode);

	printf("size = %d\n", sizeof(data));
	return 0;
}


