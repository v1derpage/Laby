#include "palindrom.h"

void isPalindrome(std::string text){
    int wordSize = text.size();
    for (size_t i = 0; i < wordSize / 2; ++i) {
        if (text[i] != text[wordSize - i - 1]) {
            std::cout << "Word is not palindrome." << '\n';
            return ;
        }
    }
    std::cout << "Word is palindrome.";
}
