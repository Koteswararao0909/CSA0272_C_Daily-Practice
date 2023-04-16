#include <stdio.h>

// function prototype
int cube();

int main() {
    int num, result;
    
    // input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // call the function to calculate cube
    result = cube(num);
    
    // print the result
    printf("The cube of %d is %d\n", num, result);
    
    return 0;
}

// function definition
int cube(int n) {
    return n * n * n;
}
