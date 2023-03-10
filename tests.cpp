#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Shift Character")
{
    CHECK (shiftChar('b',8) == 'j');
    CHECK (shiftChar('U',14) == 'I');
    CHECK (shiftChar('F',20) == 'Z');
    CHECK (shiftChar('b',52) == 'b');
    CHECK (shiftChar('z', 1) == 'a');
    CHECK (shiftChar('x', 0) == 'x');
    CHECK (shiftChar('W', 13) == 'J');
    CHECK (shiftChar('!', 4) == '%');
}


TEST_CASE("Caesar cipher encryption")
{
    CHECK (encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK (encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK (encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
    CHECK (encryptCaesar("Captain: Meet by the lake.", 7) == "Jhwahpu: Tlla if aol shrl.");
}

TEST_CASE("Vigenere cipher encryption")
{
    CHECK (encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK (encryptVigenere("Troops move postion at night.", "lemon") == "Evaccd qajr asehvzr mh atkth.");
    CHECK (encryptVigenere("Where the Red Sea neets the Nile", "sugarcane") == "Obkrv vhr Vwx Yer perxk nne Eklr");
    CHECK (encryptVigenere("Let it gooooooo", "honey") == "Ssg mr ncbsmvcb");

}

TEST_CASE("Decryption")
{
    CHECK (decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK (decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!" );
    CHECK (decryptCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");
    CHECK (decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK (decryptVigenere("Evaccd qajr asehvzr mh atkth.", "lemon") == "Troops move postion at night.");
    CHECK (decryptVigenere( "Obkrv vhr Vwx Yer perxk nne Eklr", "sugarcane") ==  "Where the Red Sea neets the Nile");

}