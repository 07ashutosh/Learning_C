#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;   
    *x = *y;     
    *y = temp;   
}

int main() {
    int a = 10, b=20;
    
    printf("Before swap a:%d\n", a);
    printf("Before swap b:%d\n", b);    

    swap(&a, &b);

    printf("After swap a:%d\n", a);
    printf("After swap b:%d", b);

    return 0;
}
