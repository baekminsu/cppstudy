#include <iostream>
#include <string>
using namespace std;

int main() {

	string A;
	char com;
	string B;

	cin >> A >> com >> B;
	int save;

	if (com == '*') {
		if (A.length() == 1 && B.length() == 1) {
			cout << "1";
			return 0;
		}
		else if (A.length() >= B.length()) {
			for (int i = 0; i < B.length() - 1; i++) {
				A.push_back('0');
			}
			cout << A;
			return 0;
		}
		else if (A.length() < B.length()) {
			for (int i = 0; i < A.length() - 1; i++) {
				B.push_back('0');
			}
			cout << B;
			return 0;
		}


	}
	else if (com == '+') {
		if (A.length() == B.length()) {
			B[0] = '2';
			cout << B;
			return 0 ;
		}
		else if (A.length() > B.length()) {
			for (int i = 0; i < B.length(); i++) {
				if (B[i] == '1') {
					save = i;
					break;
				}
			}
			if (A[A.length() -B.length()] == '1') {
				A[save] = '2';
			}
			else {
				A[A.length() - B.length()] = '1';
			}
			cout << A;
			return 0;
		}
		else if (A.length() < B.length()) {
			for (int i = 0; i < A.length(); i++) {
				if (A[i] == '1') {
					save = i;
					break;
				}
			}
			if (B[B.length() - A.length()] == '1') {
				A[save] = '2';
			}
			else {
				B[B.length() - A.length()] = '1';
			}
			cout << B;
			return 0;
		}
	}

	return 0;
}