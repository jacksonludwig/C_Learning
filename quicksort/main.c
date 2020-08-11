#include <stdio.h>

void quicksort(int v[], int left, int right);
void swap(int v[], int i, int j);

void quicksort(int v[], int left, int right) {
    int i;
    int last;

    if (left >= right)
        return;
    swap(v, left, (left + right) / 2);
    last = left;

    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left])
            swap(v, ++last, i);
        swap(v, left, last);
        quicksort(v, left, last - 1);
        quicksort(v, last + 1, right);
    }
}

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main(int argc, char *argv[]) {
    int nums[] = { 2, 56, 6, 1, 2, 9, 0, 235 };
    quicksort(nums, 0, 8);
    for(int i = 0; i < 8; i++) {
        printf("%d ", nums[i]);
    }
}
