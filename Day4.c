#include <stdio.h>
#include<math.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    float square = pow(n,2);
    
    for (int i = 1; i <= n; i++) {
        sum += (2 * i) - 1;
    }
    
    printf("The sum of the first %d odd numbers is : %d\n", n, sum);

  printf("The squre of %d is : %f\n", n, square);
    
    if (sum == square) {
        printf("SO, THIS STATEMENT IS TRUE\n");
    } else {
    printf("SO, THIS STATEMENT IS FALSE!\n");
    }
    
    return 0;
}
