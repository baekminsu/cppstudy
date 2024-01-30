#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int N, M;
    int min;
    cin >> N >> M;

    vector <string> board(M);

    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }
    min = N * M;

    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            int cnt = 0;

            for (int k = i; k < i + 8; k++) {
                for (int o = j; o < j + 8; j++) {

                    if (board[i][j] == 'W') {
                        
                    }
                    else if (board[i][j] == 'B') {

                    }

                }
            }

        }
    }


    return 0;
}
