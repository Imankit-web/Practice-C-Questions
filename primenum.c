#include <stdio.h>

int main() {

    int range;
    printf("Enter your range: ");
    scanf("%d", &range);

    for (int i = 2; i <= range; i++) {

        int flag = 1;   // assume prime

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;   // not prime
                break;
            }
        }

        if (flag) {
            printf("Prime\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
