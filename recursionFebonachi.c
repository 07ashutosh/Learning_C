#include<stdio.h>

int fibonacci(int a, int b, int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
   
    int sum = a + b;
    printf("%d ", sum);
   return fibonacci(b, sum, n - 1);
}
int main(){
    int a = 0;
    int b = 1;
    printf("%d ", a);
    printf("%d ", b);
    int n = 7;
    fibonacci(a, b, n-2);  
    return 0;
}