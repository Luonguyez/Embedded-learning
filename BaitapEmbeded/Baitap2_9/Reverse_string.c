#include <stdio.h>

void reverseString(char *start, char *end){
    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *string){
    char *wordStart = string;
    char *wordEnd = string;
    // reverse all string
    for(;*wordEnd != '\0'; wordEnd++){
    };
    wordEnd--;
    reverseString(string, wordEnd);

    // reverse each word

    for(;*string !='\0'; string++ ){
        
        if(*string == ' '){
            reverseString(wordStart, string - 1);
            wordStart = string +1;
        }
    }
    // reverse last word
        reverseString(wordStart, string - 1);
        
}

int main(){
    char string[] = "mot hai ba bon";
    reverseWords(string);
    printf("%s", string);
}