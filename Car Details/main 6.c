#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct{
	uint64_t MaxSpeed:7;
	uint64_t wgt:13;
	uint64_t color:7;
	uint64_t price:28;
}CarDetails;

CarDetails data;
long int input;
int size;

int main()
{
	printf("enter input = ");
	scanf("%lX",&input);

	data.MaxSpeed = (uint64_t)input & 0x7F;
	data.wgt = (uint64_t)(input >> 7) & 0x1FFF;
	data.color = (uint64_t)(input >> 20) & 0x7F;
	data.price = (uint64_t)(input >> 27) & 0x3FFFFFF;

	printf("data.MaxSpeed = %#x\n", data.MaxSpeed);
	printf("data.wgt = %#x\n", data.wgt);
	printf("data.color = %#x\n", data.color);
	printf("data.price = %#x\n", data.price);

	printf("size = %d\n", sizeof(data));
	while(getchar()!= '\n');
	getchar();
}
