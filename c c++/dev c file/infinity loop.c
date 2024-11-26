#include <stdio.h>

int main() {
    int n, i, j, space,k=1;

    printf("Enter the number of rows (odd): ");
    scanf("%d", &n);
    while(k=1)
    {
	
    #include <stdio.h>
#include <math.h>

int main() {
    int radius, i, j;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

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

    return 0;
}

}

    return 0;
}

