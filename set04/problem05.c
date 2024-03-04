// 5. Write a program to find the index of the largest number in an array
#include <stdio.h>

int input_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

void output(int index) {
    printf("The index of the largest number in the array is %d\n", index);
}

int main() {
    int size = input_size();
    int array[size];
    input_array(size, array);
    int largest_index = find_largest_index(size, array);
    output(largest_index);
    return 0;
}
