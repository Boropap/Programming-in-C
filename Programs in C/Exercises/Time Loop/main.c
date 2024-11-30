#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, num2;
    
    num2 = 0;
    scanf("%d", &num);

    while(num2 != num){
        num2++;
        printf("%d Abracadabra \n", num2);
    }

    return 0;
}