#include <stdio.h>
#include "m_interface.h"

int sum_of_digits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
void find_max_sum_numbers(int arr[], int n) {
    int max_sum = 0;
    int max_sum_count = 0;
    int max_sum_indices[n];

    for (int i = 0; i < n; i++) {
        int current_sum = sum_of_digits(arr[i]);
        if (current_sum > max_sum) {
            max_sum = current_sum;
            max_sum_count = 1;
            max_sum_indices[0] = i;
        } else if (current_sum == max_sum) {
            max_sum_indices[max_sum_count++] = i;
        }
    }
    printf("Число(а) с максимальной суммой цифр (%d):\n", max_sum);
    for (int i = 0; i < max_sum_count; i++) {
        printf("%d ", arr[max_sum_indices[i]]);
    }
    printf("\n");
}

