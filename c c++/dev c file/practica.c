#include <stdio.h>

int main() {
    int num, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series up to %d terms:\n", num);
    printf("%d %d ", first, second);
    int i;
    for ( i = 2; i < num; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

