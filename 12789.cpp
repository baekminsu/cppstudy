#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int num;
	int cnt = 1;
	cin >> N;

	vector<int> v;
	vector<int> v2;
	vector<int> v3;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	reverse(v.begin(), v.end());
	int verify;

	while (v.empty() != 1) {
		if (cnt != v.back()) {
			verify = v.back();
			v3.push_back(verify);
			v.pop_back();
		}
		else if (cnt == v.back()) {
			v.pop_back();
			cnt++;
			while (v3.empty() != 1) {
				verify = v3.back();
				if (verify != cnt) {
					break;
				}
				else if (verify == cnt) {
					cnt++;
					v3.pop_back();
				}
			}
		} //else if
	} // while
	int error = 0;
	for (int i = v3.size()-1; i >= 0; i--) {
		if (v3[i] != cnt) {
			error = 1;
			break;
		}
		else {
			cnt++;
		}
	}

	if (error == 0) {
		cout << "Nice";
	}
	else if (error == 1) {
		cout << "Sad";
	}


}