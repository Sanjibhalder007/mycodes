#include <stdio.h>

float f(float x) {
    // Define the function to be integrated here
    return 1 / (1 + x * x);  // Example: f(x) = 1/(1+x^2)
}

float simpsons(float a, float b, int n) {
    if (n % 2 != 0) {
        printf("Number of sub-intervals must be even for Simpson's Rule.\n");
        return -1;
    }

    float h = (b - a) / n;
    float sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        if (i % 2 == 0)
            sum += 2 * f(a + i * h);
        else
            sum += 4 * f(a + i * h);
    }

    return (h / 3) * sum;
}

int main() {
    float a, b;
    int n;

    printf("Enter the lower limit, upper limit, and number of sub-intervals: ");
    scanf("%f %f %d", &a, &b, &n);

    float result = simpsons(a, b, n);
    if (result != -1) {
        printf("Simpson's Rule Result: %f\n", result);
    }

    return 0;
}
