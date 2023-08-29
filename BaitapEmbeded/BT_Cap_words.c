#include <stdio.h>
#include<string.h>

char string[] ="mot hai ba. bon nam sau bay";

void Capwords(char string[]){
    
    for(int i = 0; string[i]!='\0'; i++)
    {
        printf("%c", string[i]);
        if(string[i] == '.'){
            for(int j = i+1; j < string[j]!= '\0'; j++){
                if(string[j] >='a' && string[j]<= 'z'){
                    string[j] -= 32;
                } 
            } 
        }
    }
}

int main()
{
    Capwords(string);
}