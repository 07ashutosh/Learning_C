#include <stdio.h>

void revPrint(int n) {
    if (n == 0) {
        return;
    }
    revPrint(n - 1);
    printf("%d ", n);
}

int main() {
    int n = 5;
    revPrint(n);
    return 0;
}
