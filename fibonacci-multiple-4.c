/*
Q.Print number for 1 to N, but:

if the number is fibonacci number -> print "Fibo"
Else if the number is multiple of 4 -> print "Four"
Else-> print the number
*/
#include <stdio.h>

int main() {
    int range;
    printf("Enter your range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) {

        /* Fibonacci check */
        int a = 1, b = 2;
        int isFib = 0;

        if (i == 1 || i == 2) {
            isFib = 1;
        } else {
            while (1) {
                int next = a + b;
                if (next == i) {
                    isFib = 1;
                    break;
                }
                if (next > i) {
                    break;
                }
                a = b;
                b = next;
            }
        }

        /* Priority output */
        if (isFib) {
            printf("Fib\n");
        }
        else if (i % 4 == 0) {
            printf("Four\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
