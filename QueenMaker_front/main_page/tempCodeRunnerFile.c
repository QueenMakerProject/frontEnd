#include <stdio.h>

int main() {
    int value = 42;

    int *ptr1 = &value;

    int **ptr2 = &ptr1;

    int ***ptr3 = &ptr2;

    printf("Value using triple pointer: %d\n", ***ptr3);

    ***ptr3 = 99;
    printf("Updated value using triple pointer: %d\n", value);

    return 0;
}
