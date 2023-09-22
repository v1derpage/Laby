#include <gtest/gtest.h>
#include "palindrom.h"

TEST(PalindromeTest, emptyString) {
    std::string empty = "";
    testing::internal::CaptureStdout(); 
    isPalindrome(empty);
    std::string output = testing::internal::GetCapturedStdout(); 
    EXPECT_EQ(output, "Word is palindrome.");
}

TEST(PalindromeTest, oneChar) {
    std::string singleChar = "a";
    testing::internal::CaptureStdout();
    isPalindrome(singleChar);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Word is palindrome.");
}

TEST(PalindromeTest, wordIsPalindrome) {
    std::string palindromeWord = "racecar";
    testing::internal::CaptureStdout();
    isPalindrome(palindromeWord);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Word is palindrome.");
}

TEST(PalindromeTest, noPalindrome) {
    std::string nonPalindromeWord = "hello";
    testing::internal::CaptureStdout();
    isPalindrome(nonPalindromeWord);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Word is not palindrome.\n"); 
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
