#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int N;
	int input;
	cin >> N;
	int result = 0;
	for (int i = 0; i < N; i++) {
		cin >> input;
		v.push_back(input);
	}
	int standard = v[0];
	for (int i = 0; i < N; i++) {
		standard = v[i];
		if (standard + 1 == v[i] || standard - 1 == v[i] || standard == v[i]) {
			continue;
		}
		result++;
	}


	cout << result;

	return 0;
}