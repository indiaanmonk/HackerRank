#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
    // returns a + b    
    return a + b;
}

int main() {
    // Read input
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Calc Sum
    int sum = solveMeFirst(num1, num2);

    // Print Sum
    printf("%d", sum);

    return 0;
}
