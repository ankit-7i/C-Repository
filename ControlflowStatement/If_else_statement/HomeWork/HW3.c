#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    float avg;

    printf("Enter a number (n): ");
    scanf("%d", &n);

start:
    if (i <= n) {
        sum += i;
        i++;
        goto start;
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}