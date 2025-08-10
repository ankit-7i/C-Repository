#include <stdio.h>

int main() {
    int i = 2, n;

    printf("Enter n value: ");
    scanf("%d", &n);

start:
    if (i <= n) {
        printf("%d\t", i);
        i += 2; // Increment by 2 to get the next even10 number
        goto start;
    }

    return 0;
}
