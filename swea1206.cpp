#include <iostream>
#include <string>
using namespace std;
int main() {

    int N;
    int floor;
    int cnt;

    for (int i = 0; i < 10; i++) {
        cin >> N ;
        cnt = 0;
        int apart[1000][255] = { 0, };
        for (int j = 0; j < N ; j++) {
            cin >> floor;
            for (int k = 0; k < floor; k++) {
                apart[j][k] = 1;
            }
        }

        //for (int j = 0; j < N; j++) {
        //    for (int k = 0; k < 5; k ++ ) {
        //        cout << apart[j][k] << " ";
        //    }
        //    cout << endl;
        //}


        for (int j = 2; j < N-2; j++) {

            for (int k = 0; k < 255; k++) {
                if (apart[j][0] == 0) {
                    break;
                }
                else if (apart[j - 1][k] == 0 && apart[j - 2][k] == 0 && apart[j + 1][k] == 0 && apart[j + 2][k] == 0 && apart[j][k] == 1) {
                    cnt++;
                }
                
            }

        }
        cout << "#" << i+1 << " " << cnt << endl;
    }


    return 0;
}