#include <iostream>
using namespace std;

int main() {

	int N = 9;
	int sum = 0;
	int nan[9];

	for (int i = 0; i < 9; i++) {
		cin >> nan[i];
		sum += nan[i];
	}

	sort(nan, nan + 9);


	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (nan[i] + nan[j]) == 100) {
				nan[i] = -1;
				nan[j] = -1;
				break;
			}
		}
		if (nan[i] == -1) {
			break;
		}
	}

	for (int i = 0; i < 9; i++) {
		if (nan[i] != -1) {
			cout << nan[i] << endl;
		}
	}
	

	return 0;
}