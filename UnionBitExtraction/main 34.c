#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

union Packet{
	uint32_t input;
	struct{
		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t longAddr	:8;
		uint32_t shortAddr	:2;
		uint32_t addrMode	:1;
	}PacketFields;
};

union Packet data;
int size;

int main()
{
	printf("enter input = ");
	fflush(stdout);
	scanf("%x",&data.input);

	printf("data.crc = %#x\n", data.PacketFields.crc);
	printf("data.status = %#x\n", data.PacketFields.status);
	printf("data.payload = %#x\n", data.PacketFields.payload);
	printf("data.bat = %#x\n", data.PacketFields.bat);
	printf("data.sensor = %#x\n", data.PacketFields.sensor);
	printf("data.longAddr = %#x\n", data.PacketFields.longAddr);
	printf("data.shortAddr = %#x\n", data.PacketFields.shortAddr);
	printf("data.addrMode = %#x\n", data.PacketFields.addrMode);

	printf("size = %d\n", sizeof(data));
}



