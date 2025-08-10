#include <stdio.h>

int main() {
    float sales, basic = 10000, da, bonus, commission, gross;

    // Input sales amount
    printf("Enter sales amount: ");
    scanf("%f", &sales);

    // Calculate DA (94.5% of basic)
    da = basic * 0.945;

    // Check sales threshold
    if (sales >= 100000) {
        bonus = 10000;
        commission = sales * 0.10;  // 10%
    } else {
        bonus = 2000;
        commission = sales * 0.05;  // 5%
    }

    // Calculate gross salary
    gross = basic + da + bonus + commission;

    // Output result
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
