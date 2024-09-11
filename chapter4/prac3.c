#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    
    // Loop to calculate the sum of numbers from 1 to 10
    while (i <= 10) {
        sum += i;  // Add the current value of i to sum
        i++;       // Increment i
    }
    
    // Print the final sum after the loop
    printf("The sum of numbers from 1 to 10 is: %d\n", sum);
    
    return 0;
}


// Example with the Loop:
// Let’s walk through the code for a few iterations to understand how it works:

// Initially, sum = 0 and i = 1.
// In the first iteration:
// sum += i becomes sum = sum + i → sum = 0 + 1 → sum = 1.
// Now, i++ increments i to 2.
// In the second iteration:
// sum += i becomes sum = sum + i → sum = 1 + 2 → sum = 3.
// Now, i++ increments i to 3.
// In the third iteration:
// sum += i becomes sum = sum + i → sum = 3 + 3 → sum = 6.
// Now, i++ increments i to 4.
// This process continues until i becomes greater than 10, at which point the loop stops. By the end of the loop, the sum of all numbers from 1 to 10 will be stored in sum.