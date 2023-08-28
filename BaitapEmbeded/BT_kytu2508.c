#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct 
{
    char *arr;
    int length;
}Words;

char array[] = "mot hai, ba bon";

Words *string(char array[]){
    int size = 1;
    int i =0;
    while(array[i] != '\0'){
        
        if(array[i] == ' '){
            size ++;
        }
        i++;
    }
    i=0;
   
    Words *word =malloc(size * sizeof(Words));
        
    int index = 0;

    word[index].arr = array;

    int count = 0;

    while(array[i] != '\0'){
        
        if(array[i] == ' ' || array[i] == ', '){
            word[index].length = count;
            word[++index].arr = array+i+1;
            count = 0;
        }else{
             count++;
        }
        i++;
    }

    word[index].length = count;
    return word;
}

void display(Words word){
    for (int i = 0; i <word.length; i++){
        printf("%c", word.arr[i]);
    }
}

bool isEqual(Words word1, Words word2){
   
    if (Words word1 == Words word2){
        return true;
    }else{
        return false;
    }
    
}
int main() {
   
  Words *word =  string(array);
   
   for (int i = 0; i < 5; i++)
   {
    display(word[i]);
    printf("\n");
    isEqual(word[i], word[i+1]);
   }
   free(word);
   isEqual(mot , mot);
    return 0;
}
