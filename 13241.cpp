#include <iostream>
using namespace std;

long long int resultA;
long long int resultB;

long long int minchoi(long long int A, long long int B) {
	int tempA, tempB;
	tempA = A;
	tempB = B;
	long long int C;
	while (B != 0) {
		C = A % B;
		A = B;
		B = C;
	}
	resultA = tempA / A;
	resultB = tempB / A;
	return A;
}


int main() {

	long long int A, B;
	long long int a, b;
	cin >> A >> B;
	long long int result;

	result = minchoi(A,B);
	result = result * resultA * resultB;

	cout << result;

	return 0;
}