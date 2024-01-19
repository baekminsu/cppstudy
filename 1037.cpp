#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	unsigned int A,N;
	unsigned num;
	vector <unsigned int> v;

	cin >> N;
	unsigned maxN = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
		if (num > maxN) {
			maxN = num;
		}
	}
	
	int cnt = 0;

	for (int i = 2; i <= maxN *2; i++) {
		cnt = 0;
		for (int j = 0; j < v.size(); j++) {
			if ( i % v[j] == 0 && i != v[j]) {
				cnt++;
			}
		}
		if (cnt == N ) {
			A = i;
			break;
		}
	}
	cout << A;
	return 0;
}