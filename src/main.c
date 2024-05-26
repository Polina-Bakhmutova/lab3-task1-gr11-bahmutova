#include <stdio.h>
#include "m_interface.h"

int main() {
    int n;

    printf("Введите размер массива: ");
    scanf("%d", &n);
	
    int arr[n];
	
    printf("Введите элементы массива: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    find_max_sum_numbers(arr, n);

    return 0;
}
