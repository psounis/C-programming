#include <stdio.h>

int i,j;

int main() {
    for (i=1; i<=90; i++) {
        for (j=1; j<=i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}

