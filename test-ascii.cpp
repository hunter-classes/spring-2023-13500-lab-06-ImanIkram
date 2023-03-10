#include <iostream>
#include <string>

int main(){

    std::string text = "Cat : 65 Dog";

    for (int i = 0; i < text.length(); i++)
    {
    std::cout << text[i] << " " << (int)text[i] << std::endl;
    }

    return 0;
}