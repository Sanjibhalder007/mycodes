#include <stdio.h>
  #include <math.h>
  
  int is_pronic_number(int num); 
  void print_fibonacci_series(int num_terms); 
  
  int main() { 
  int choice, num, num_terms; 
  
 do { 
 printf("\nMenu\n");
 printf("1. Check whether a number is a pronic number\n");
 printf("2. Print Fibonacci series up to N terms\n");
 printf("3. Exit\n");
1printf("Enter your choice: ");
 scanf("%d", &choice);  
 switch (choice) { 
 case 1:  printf("Enter a number: ");
 scanf("%d", &num); 
 
 if (is_pronic_number(num)) { 
 printf("%d is a pronic number.\n", num); 
 } else { 
 printf("%d is not a pronic number.\n", num); 
 } 
 
 break; 
 case 2: 
 printf("Enter the number of terms: ");
 scanf("%d", &num_terms); 
 
 print_fibonacci_series(num_terms); 
 
 break; 
 case 3: 
 printf("Exiting program.\n");
 
 break; 
 default: 
 printf("Invalid choice. Please try again.\n");
} while (choice != 3);
 
 return 0; 
 } 
 
int is_pronic_number(int num) { 
 int square_root = (int)sqrt(num); 
 if (square_root * (square_root + 1) == num) { 
 return 1; 
 } else { 
 return 0; 
 } 
 } 
 
 void print_fibonacci_series(int num_terms) { 
 int i, a = 0, b = 1, c; 
 
61printf("Fibonacci series up to %d terms: ", num_terms); 
 
 for (i = 0; i < num_terms; i++) { 
 printf("%d ", a); 
 c = a + b; 
 a = b; 
 b = c; 
 } 
 
 printf("\n");
}
