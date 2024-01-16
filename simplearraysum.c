// Reads the number of elements from the user (N).
// Stores each element in an array (map).
// Loops through the array, adding each element to a running total (sum).
// Prints the final sum of all elements to the console.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int N;
int map[1000];
int main() {
  long int sum =0;
    scanf("%d",&N);
    for(int i = 0; i<N; i++)
        {
      scanf("%d",&map[i]);
    }
    for(int i=0; i<N;i++)
        {
        sum += map[i];
    }
    
    printf("%ld",sum);
    return 0;
}
