#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char *argv[])
{
    int x = 5;
    int y = 10;
    printf("Before: %d %d\n", x, y);
    swap(&x, &y);
    printf("After: %d %d\n", x, y);
    return 0;
}
