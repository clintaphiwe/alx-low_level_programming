#include <stdbool.h>

bool is_match(char *s1, char *s2) {
    // If both strings are empty, they are identical
    if (*s1 == '\0' && *s2 == '\0') {
        return true;
    }

    // If the first string is empty but the second string is not, they are not identical
    if (*s1 == '\0') {
        return false;
    }

    // If the second string is empty but the first string is not, they are not identical
    if (*s2 == '\0') {
        return false;
    }

    // If the second character is '*', we have two options:
    // 1. We can ignore the '*' character and move on to the next character in s2.
    // 2. We can match the '*' character with the current character in s1, and then compare the rest of the string.
    if (*s2 == '*') {
        return is_match(s1, s2 + 1) || is_match(s1 + 1, s2);
    }

    // If the current characters in s1 and s2 are identical, we can move on to the next character in both strings
    if (*s1 == *s2) {
        return is_match(s1 + 1, s2 + 1);
    }

    // If none of the above conditions are met, the strings are not identical
    return false;
}

int wildcmp(char *s1, char *s2) {
    return is_match(s1, s2) ? 1 : 0;
}