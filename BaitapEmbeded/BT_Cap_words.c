/*
* File: BT_Cap_words.c
* Author: Luong Nguyen
* Date: 28/08/2023
* Description:
     1. Capitalize the letters after the dot (.).
*/
//header 
#include <stdio.h>
#include<string.h>

char string[] ="mot hai ba. bon nam sau bay";
/*
* Function: 
* Description: This function in order to capitalize the letters after the dot.
* Input:
*   char string[]
* Output:
*   printf the string after capitalize
*/
void capWords(char string[]){
    
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
    capWords(string);
}
