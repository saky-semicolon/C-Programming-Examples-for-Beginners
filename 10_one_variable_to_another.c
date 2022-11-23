#include <stdio.h>

// Create an integer variable named distance with value 135. Print the distance variable. Create another integer variable named newDistance with value 429.

int main() {
    int distance;
    distance=135;
    printf("%d", distance);
    
    int newDistance=429;
    
    distance=newDistance;
    
    printf("  %d", distance);

}