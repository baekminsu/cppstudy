#include <iostream>
using namespace std;

int main() {

	int M;
	cin >> M;

	int cup[3] = { 1, };
	int X, Y;
	int temp;

	for (int i = 0; i < M; i++) {
		cin >> X >> Y;
		X = X - 1; Y = Y - 1;
		temp = cup[Y];
		cup[Y] = cup[X];
		cup[X] = temp;
	}
	for (int i = 0; i < 3; i++) {
		if (cup[i] == 1) {
			cout << i + 1;
		}
	}


	return 0;
}