// Defines a function solveMeFirst that adds two integers.
// Reads two numbers (num1 and num2) from the user.
// Calls solveMeFirst with those numbers, receiving the sum.
// Stores the sum in variable sum.
// Prints the value of sum (the combined numbers).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = solveMeFirst(num1, num2);

    printf("%d", sum);

    return 0;
}
