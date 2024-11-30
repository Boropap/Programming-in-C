#include <stdio.h>
#include <stdlib.h>

int main(){

    char array[160];
    char *phrase = array;
    int i = 0;

    char arrayClean[160];
    char *phraseClean = arrayClean;
    int j = 0;

    int ali = 0;
    int und = 0;

    //Catch phrase
    scanf("%[^\n]s", phrase);

    //Clean phrase from all ' '
    while(phrase[i] != '\0'){

        if(phrase[i] == ' '){
            i++;
        }else{
            phraseClean[j] = phrase[i];
            i++;
            j++;
        }
    }

    //Look if phrase has :) or (: or :( or ):
    j = 0;
    while(phraseClean[j] != '\0'){
        if(phraseClean[j] == ':' && phraseClean[j+1] == ')' || phraseClean[j] == '(' && phraseClean[j+1] == ':'){
            ali =1;
            j++;
        }else if(phraseClean[j] == ':' && phraseClean[j+1] == '(' || phraseClean[j] == ')' && phraseClean[j+1] == ':'){
            und =1;
            j++;
        }
        j++;
    }

    //Define if the category of the phrase
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