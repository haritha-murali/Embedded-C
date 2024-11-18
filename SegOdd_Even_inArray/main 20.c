#include <stdio.h>

void segOddAndEven(int arr1[], int n)
{
    int ctr = 0;
    int odd[n];

    printf("Odd elements are :");
    for (int i = 0; i < n; i++) {
        if (arr1[i]%2 != 0) {
            ctr++;
            odd[i]=arr1[i];
            printf("%d  ", odd[i]);
        }
    }

    printf("\nEven elements are :");
    for(int i=0;i<n;i++){
        if(arr1[i]==odd[i]){
            continue;
        }
        else{
            printf("%d  ", arr1[i]);
        }
    }
}

int main()
{
    int arr1[] = { 2, 3, 1, 5, 6, 8, 7, 9, 11 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    segOddAndEven(arr1, n);
    return 0;
}

