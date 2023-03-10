#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  //Task B
  std::cout << "Task B: Caesar cipher encryption " << std::endl;
  std::cout << "Right shift of 8, b = " << shiftChar('b', 8) << std::endl;
  std::cout << "Right shift of 14, U = " << shiftChar('U', 14) << std::endl;
  std::cout << "Right shift of 20, F = " << shiftChar('F', 20) << std::endl;
  std::cout << "Plaintext: Captain: Meet by the lake." << std::endl;
  std::cout << "Ciphertext: " << encryptCaesar("Captain: Meet by the lake.", 7) << std::endl;
  std::cout << "Plaintext: Way to Go!" << std::endl;
  std::cout << "Ciphertext: " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "_______________________\n";

  //Task C
  std::cout << "Task C: Vigenere cipher encryption " << std::endl;
  std::cout << "Plaintext: Hello, World!" << std::endl;
  std::cout << "Ciphertext: " << encryptVigenere("Hello, World!", "cake") << std::endl;
  std::cout << "Plaintext: Troops move postion at night." << std::endl;
  std::cout << "Ciphertext: " << encryptVigenere("Troops move postion at night.", "lemon") << std::endl;
  //std::cout << "Ciphertext: " << encryptVigenere("Let it gooooooo", "honey") << std::endl;

  //Task D
  std::cout << "_______________________\n";
  std::cout << "Task D: Decryption " << std::endl;
  std::cout << decryptCaesar("Bfd yt Lt!", 5) << std::endl;
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
  std::cout << decryptCaesar("F Qnlmy-Djfw Fufwy", 5) << std::endl;

  std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
  std::cout << decryptVigenere("Evaccd qajr asehvzr mh atkth.", "lemon") << std::endl;

  return 0;
}
