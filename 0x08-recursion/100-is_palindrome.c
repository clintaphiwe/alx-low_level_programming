#include <dbool.h>

bool ispalindrome_helper(char *s int start, int end)
    // If the start index is greater than or equal to the end index, the string is a palindrome
 if (start >= end) {
        return true;
    }

    // If the current characters at the start and end indices are not identical, the string is not a palindrome
    if (s[start] != s[end]) {
        return false;
    }

    // Recursively check the rest of the string
    return is_palindrome_helper(s, start + 1, end - 1);
}

int is_palindrome(char *s) {
    // Call the helper function with the start and end indices set to the first character in the string
    return is_palindrome_helper(s, 0, strlen(s) - 1);
}