#include <stdio.h>
/**
 *
 * @param list
 * @param item
 * @param low
 * @param high
 * @return
 */
int binary_search(int list[], int item, int low, int high);

int main() {
    int my_list[] = {1, 3, 5, 7, 9};
    int low = 0;
    int high = sizeof(my_list) / sizeof(my_list[0]);
    int num = 9;
    int search_value = binary_search(my_list, num, low, high);
    if (search_value == 100) {
        printf("Not found");
    } else {
        printf("Element is found at index %d", search_value);
    }
    return 0;
}

int binary_search(int list[], int item, int low, int high) {
    while (low <= high) {
        int mid = (high + low) / 2;
        int guess = list[mid];
        if (guess == item) {
            return mid;
        }
        if (guess > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 100;
}