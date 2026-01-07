#include <stdio.h>

int main() {
    int range;
    printf("Enter your range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
