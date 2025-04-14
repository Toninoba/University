#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if(argc > 3 || argc < 3){
        printf("Nicht genuegend Parameter oder zu viele Parameter\n");
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if(num1 > 9 || num1 < 0 ||
        num2 > 9 || num2 < 0){
        printf("Zu kleine oder zu grosse Zahlen");
        return 0;
    }

    int mul = num1 * num2;

    printf("Result: %d\n", mul);

    return 0;
}
