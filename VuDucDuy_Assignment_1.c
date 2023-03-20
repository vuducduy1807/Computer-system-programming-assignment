/*
======================================================================
Name        : Assignment 1
Author      : Vu Duc Duy
Description : Replace the the character: ! " # $ % & ' ( ) * + , - . / 
by space “ ” and convert to lowercase  
======================================================================
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int ch, space_counter = 0;
    
    printf(" \n");
   
    while (1) { 
        ch = getchar();
        
        if (ch == EOF){
            printf("Program ended \n");
            break;
        }
        
        if (ch == '!' || ch == '"' || ch == '#' || ch == '$' || ch == '%' || ch == '\''|| ch == '(' || ch == ')' || ch == '*' || ch == '+' || ch == ',' || ch == '-' || ch == '.' || ch == '/' ) 
         {
            ch = ' ';           
         } 
        else 
         {
            ch = tolower(ch);   
         }

       
        if (ch == ' ') {
            space_counter++;     
        } else {                  
            space_counter = 0;   
        }

        if (space_counter > 1) { 
            continue;
        }

        putchar(ch);
    }

    return 0;
}

