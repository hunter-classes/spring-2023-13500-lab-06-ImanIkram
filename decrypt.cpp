#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string decrypt = "";
    decrypt += encryptCaesar(ciphertext, 26-rshift);
    return decrypt;
}



std::string decryptVigenere(std::string ciphertext, std::string keyword){
    
    std::string decrypt = "";
    for(int i = 0; i < keyword.length(); i++){
        keyword[i] = 123 - (keyword[i]-97);
    }
    decrypt += encryptVigenere(ciphertext, keyword);

    return decrypt;
}

