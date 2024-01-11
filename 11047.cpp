#include <iostream>
#include <vector>

using namespace std;

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(0);

	vector<int> v;
	int N, K;
	int money;
	int result = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> money;
		v.push_back(money);
	}

	for (int i = N - 1; i >= 0; i--) {
		if (K / v[i] > 0) {
			result += K / v[i];
			K = K % v[i];
		}
	}
	cout << result;

	return 0;
}