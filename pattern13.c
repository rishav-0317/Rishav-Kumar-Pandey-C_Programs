//1234567
//12345
//123
//12
//1
#include <stdio.h>

int main() {
    int n = 7;

    for (int i = n; i >= 1; i=i-2) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
