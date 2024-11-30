#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, load;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){
        load = num1; // load = 987
        num1 = num2; // num1 = 23
        num2 = load; // num2 = 987
    }

    printf("%d %d", num1, num2);

    return 0;
}