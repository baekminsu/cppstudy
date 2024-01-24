#include <iostream>
#include <string>
using namespace std;

int main() {

	string A, B;
	char oper;

	cin >> A >> oper >> B;

	if (stoi(A) + stoi(B) == 2) {
		if (oper == '+') {
			cout << "2";
		}
		else if (oper == '*') {
			cout << "1";
		}
	}
	else if (A.length() >= B.length()) {
		if (oper == '*') {
			if (B.length() > 1) {
				for (int i = 0; i < B.length() - 1; i++) {
					A.push_back('0');
				}
			}
		}
		else if (oper == '+') {
			A[A.length() - B.length()] = '1';
		}
		cout << A;
	}
	else {
		if (oper == '*') {
			if (A.length() > 1) {
				for (int i = 0; i < A.length() - 1; i++) {
					B.push_back('0');
				}
			}
		}
		else if (oper == '+') {
			B[B.length() - A.length()] = '1';
		}
		cout << B;
	}
	



	return 0;
}