/*The typedef keyword is used to define an alias for the already existing datatype.
 * In structures, we have to use the struct keyword along with the structure name to define the variables.
 * Sometimes, this increases the length and complexity of the code.
 * We can use the typedef to define some new shorter name for the structure.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct address1{
	uint8_t shortAddress1;
	uint16_t longAddress1;
};

typedef struct{
	uint8_t shortAddress2;
	uint16_t longAddress2;
}address2;

struct address1 data1;
address2 data2;

int main(){
	data1.shortAddress1 = 0xfe;
	data1.longAddress1 = 0xabcd;
	data2.shortAddress2 = 0xfe;
	data2.longAddress2 = 0xabcd;

	printf("data1.shortAdd1 = %#x\n", data1.shortAddress1);
	printf("data1.longAdd1 = %#x\n", data1.longAddress1);
	printf("data2.shortAdd2 = %#x\n", data2.shortAddress2);
	printf("data2.longAdd2 = %#x\n", data2.longAddress2);

	return 0;
}
