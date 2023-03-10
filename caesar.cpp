#include <iostream>
#include <cctype>
#include "caesar.h"


// works for any arbitrary integer shift 
char shiftChar(char c, int rshift){

    int n = int(c);
    rshift = rshift % 26;
    n = n+rshift;
    
   if (c >= 'a' && c<= 'z') // lower case alphabets
    {   
        if (n>122) // checks if need to wrap around alphabet back to 'a'
        {
            n = 97+(n%123); //updates shift 
        }
    }
    else if (c >= 'A' && c<= 'Z') // upper case alphabets
    {
        if (n>90) // checks if need to wrap around alphabet back to 'A'
        {
            n = 65+(n%91); //updates shift 
        }
        
    }
    return n;
}

// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift){
    
    std::string ciphertext;

    for (int c = 0; c < plaintext.length(); c++) // loops through the text
    {
        if (isalpha(plaintext[c])) // if char an alphabet
        {
            ciphertext += shiftChar(plaintext[c], rshift); // uses shiftChar to shift char by rshift 
        }
        else 
        {
            ciphertext += plaintext[c]; //if not alphabet, acquire char without shifting
        }
        
    }
    return ciphertext;
}
