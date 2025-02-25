#include <iostream>
#include <cstring>

bool substr(const char* str1, const char* str2) {
    //получение длин строк
    size_t len1 = std::strlen(str1);
    size_t len2 = std::strlen(str2);

    if (len2 > len1) return false;

    for (size_t i = 0; i <= len1 - len2; ++i) {
        bool found = true;
        for (size_t j = 0; j < len2; ++j) {
            if (str1[i + j] != str2[j]) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }

    return false;
}

int main() {
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    std::cout << substr(a, b) << " " << substr(a, c) << std::endl;
}

