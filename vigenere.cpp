#include <iostream>
#include "vigenere.h"
#include "caesar.h"
#include <cctype>

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    std::string ciphertext;
    int counter = 0;
    for (int c = 0; c<plaintext.length(); c++) // loops through the text
    {
        if (counter>keyword.length() - 1) // if reaches end of the keyword, 
        {counter = 0;} //goes back to use the first letter of the keyword
        
        if (isalpha(plaintext[c]))
        {
            ciphertext+= shiftChar(plaintext[c], int(keyword[counter])-97); // uses shiftChar to shift character by the value of the keyword char 
            counter++; // increment counter by one to go to the next char in keyword
        }
        else 
        {
            ciphertext+= plaintext[c]; // if not alphabet, acquire char without using a shift from the keyword
        }
    }

    return ciphertext;
}

