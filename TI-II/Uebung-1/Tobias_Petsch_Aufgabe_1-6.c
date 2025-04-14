#include <stdio.h>


int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}


int main(void) {

    for (int i = 1; i <= 10; ++i) {
        printf("Die %d. Fibonacci Zahl ist: %d\n", i, fib(i));
    }
}
