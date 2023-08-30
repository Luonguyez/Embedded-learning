/*
* File: BT_Cap_words.c
* Author: Luong Nguyen
* Date: 28/08/2023
* Description:
     1. Capitalize the letters after the dot (.).
     2. Tim ky tu trung lap
     3. Thay the
*/

//header 

#include <stdio.h>
#include<string.h>
#include <stdbool.h>

//source

char string[] ="mot hai ba. bon nam sau";
//              01234567890123456789012      

/*
* Function: capWords
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

/*
* Function: 
* Description: This function in order to find the text in string
* Input:
*   char string[], char text
* Output:
*   printf position of text or No.
*/

void findText(char string[], char text[]){
    
        for(int i = 0; string[i] !='\0'; i++){
            if(text[0] == string[i]){
                int check = 1;
                    for(int j=1; text[j]!='\0'; j++){
                        if (text[j] != string[i+j])
                        {
                            check = 0;
                            break;
                        }
            } 
            if (check == 1){
               printf("Co tai vi tri %d\n", i);
               return;
            }else 
            {
               printf("Khong co");
            }
           
           
        }
    }
    
}


int main()
{
    // capWords(string);
    findText(string,"mot" );
}