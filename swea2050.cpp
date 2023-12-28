#include <iostream>
#include <string>

int main() {

    char alpha[26];
    char alpha2[26];
    int alpha_number[26];
    char S[200];
    int result[200];

    std::cin >> S;

    for (int i = 0; i < 26; i++) {
        alpha[i] = 'A' + i;
        alpha2[i] = 'a' + i;
        alpha_number[i] = i + 1;
    }
    int len = 0;
    int j = 0;
    while (1) {
        if (S[j] == '\0') {
            break;
        }
        j++;
        len++;
    }

    for (int i = 0; i < len; i++) {
        for (int k = 0; k < len; k++) {
            if (S[i] == alpha[k] || S[i] == alpha2[k]) {
                result[i] = alpha_number[k];
                break;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        std::cout << result[i] << " ";
    }


    return 0;
}