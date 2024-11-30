#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char array[160];
    char *phrase = array;
    int i = 0;
    int ali = 0, und = 0;

    //Catch phrase
    scanf("%[^\n]s", phrase);

    //Find in phrase :) or :(
    while(phrase[i] != '\0'){
        if(phrase[i] == ':' && phrase[i+1] == ')'){
            ali = 1;
            i++;

        }else if(phrase[i] == ':' && phrase[i+1] == '('){
            und = 1;
            i++;
        }
        i++;
    }

    //Define the category of the phrase
    if(ali == 1 && und == 1){
        printf("Double Agent");
    }else if(ali == 1 && und == 0){
        printf("Alive");
    }else if(ali == 0 && und == 1){
        printf("Undead");
    }else{
        printf("Machine");
    }

    
    return 0;
}