/*
 * main.c
 *
 *  Created on: 05-Jun-2024
 *      Author: 33198
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Packet{
	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addrMode;
};

struct Packet data;
long int input;
int size;

int main()
{
	printf("enter input = ");
	fflush(stdout);
	scanf("%lX",&input);

	data.crc = (uint8_t)input & 0x3;
	data.status = (uint8_t)(input >> 2) & 0x1;
	data.payload = (uint16_t)(input >> 3) & 0xFFF;
	data.bat = (uint8_t)(input >> 15) & 0x7;
	data.sensor = (uint8_t)(input >> 18) & 0x7;
	data.longAddr = (uint8_t)(input >> 21) & 0xFF;
	data.shortAddr = (uint8_t)(input >> 29) & 0x3;
	data.addrMode = (uint8_t)(input >> 31) & 0x1;

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
