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
	int start = 1;
	for (int i = 0; i < N; i++) {
		if (start != v[i]) {
			result++;
		}
		start++;
	}


	cout << result;

	return 0;
}