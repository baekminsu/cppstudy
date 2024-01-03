#include <iostream>

using namespace std;

int main() {
	int A, B;
	int C;
	int result;
	cin >> A >> B;
	cin >> C;
	result = A + B;
	if ((A + B) >= (C*2)) {
		result = result - (C * 2);
	}

	cout << result;

}