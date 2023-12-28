#include <iostream>
#include <string>
using namespace std;
int main() {

    string S;
    cin >> S;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] >= 'a' and S[i] <= 'z') {
            S[i] = (S[i] % 'a') + 'A';
        }
    }

    for (int i = 0; i < S.length(); i++) {
        cout << S[i];
    }

    return 0;
}