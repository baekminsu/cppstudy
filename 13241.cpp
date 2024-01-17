#include <iostream>
using namespace std;

long long int minchoi(long long int A, long long int B) {

	long long int C;


	if (A >= B) {
		while (B != 0) {
			C = A % B;
			A = B;
			B = C;
		}
		return A;
	}
	else {
		while (A != 0) {
			C = B % A;
			B = A;
			A = C;
		}
		cout << B << "\n";
		return B;
	}
}

int main() {

	long long int A, B;

	cin >> A >> B;
	long long int result;

	result = minchoi(A,B);


	result = result * A * B;


	cout << result;

	return 0;
}