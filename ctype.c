#include <stdio.h>
#include <ctype.h>

void isAlphanumeric(char);
void isAlphabetic(char);
void isControl(char);
void countDigit();

int main(void){

    isAlphanumeric('p');
    isAlphanumeric('5');
    isAlphanumeric(' ');
    printf("\n");

    isAlphabetic('r');
    isAlphabetic('1');
    printf("\n");

    isControl('a');
    isControl('c');
    isControl('\t');
    printf("\n");

    countDigit();
}

//Function to check if character is alphanumeric
void isAlphanumeric(char c){

    if (isalnum(c)){
        printf("Value |%c| is alphanumeric.\n", c);
    }else{
        printf("Value |%c| is not alphanumeric.\n", c);
    }
}

//Function to check if character is alphabetic
void isAlphabetic(char c){

    if(isalpha(c)){
        printf("The character |%c| is alphabetic.\n", c);
    }else{
        printf("The character |%c| is not alphabetic.\n", c);
    }
}


//Function to check if character is control character
void isControl(char c){

    if (iscntrl(c)){
        printf("The character |%c| is a control character\n", c);
    }else{
        printf("The character |%c| is not a control character\n", c);
    }
}


//Function to check if character is a digit and count digits
void countDigit(){

    char string[] = "dfasd1fdsaf4fd342d";
    int i = 0;
    int count = 0;

    while (i < (int)sizeof(string)){
        if (isdigit(string[i])){
            count += 1;
        }
        i += 1;
    }
    printf("Number of digits is %d\n", count);
}