/*
 * main.c
 *
 *  Created on: 18-Jul-2024
 *      Author: 33198
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void DisplayArray(int8_t *array,uint32_t nitems);
void swap_elements(int8_t *arr1, int8_t *arr2, uint32_t size);
void Wait_user_input();

int main() {
	uint32_t l1, l2;

	    printf("\nEnter the size of the first array: ");
	    scanf("%d", &l1);
	    int8_t arr1[l1];
	    for (int8_t i = 0; i < l1; i++) {
	    	printf("Enter element %d of array-1: ",i);
	        scanf("%d", &arr1[i]);
	    }

	    printf("Enter the size of the second array: ");
	    scanf("%d", &l2);
	    int8_t arr2[l2];
	    for (int8_t i = 0; i < l2; i++) {
	    	printf("Enter element %d of array-2: ",i);
	        scanf("%d", &arr2[i]);
	    }

	    printf("Arrays before swap:\n");
	    printf("Array 1: ");
	    DisplayArray(arr1,l1);

	    printf("\nArray 2: ");
	    DisplayArray(arr2,l2);
	    printf("\n");

	    swap_elements(arr1, arr2, (l1 < l2) ? l1 : l2);

	    printf("Arrays after swap:\n");
	    printf("Array 1: ");
	    DisplayArray(arr1,l1);
	    printf("\nArray 2: ");
	    DisplayArray(arr2,l2);
	    printf("\n");

		Wait_user_input();

	return 0;
}

void DisplayArray(int8_t *array,uint32_t nitems){
	for(int8_t i=0; i<nitems ;i++){
		printf("%d ",array[i]);
	}
}

void swap_elements(int8_t *arr1, int8_t *arr2, uint32_t size) {
    for (int8_t i = 0; i < size; i++) {
        int8_t temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}


void Wait_user_input(){
	printf("\nplease press enter to exit");
	while(getchar() != '\n')
	{
	}
	getchar();
}
