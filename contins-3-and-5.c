#include <stdio.h>

int main() {
    int range;
    printf("Enter your range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) {

        int temp = i;
        int found = 0;

        while (temp > 0) {
            if (temp % 10 == 3) {
                found = 1;
                break;
            }
            temp = temp / 10;
        }

        if (found) {
            printf("Three\n");
        }
        else if (i % 5 == 0) {
            printf("Five\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
