#include <stdio.h>
#include <math.h>

int main() {
    long long int radius, i, j,k=1;
while(k=1)

{

    printf("Enter the radius of the circle: ");
    scanf("%lld", &radius);
    

    // Calculate the diameter
    int diameter = 2 * radius;

    // Loop through each row
    for (i = -radius; i <= radius; i++) {
        // Loop through each column
        for (j = -radius; j <= radius; j++) {
            // Check if the point (i, j) is within the circle
            if (sqrt(i * i + j * j) <= radius) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

}
    return 0;
}

