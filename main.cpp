#include "palindrom.h"

int main() {
    std::string word;
    std::getline(std::cin, word);
    isPalindrome(word);
    return 0;
}