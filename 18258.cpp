#include <queue>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int N;
	string command;
	int command2;
	cin >> N;

	queue<int> q;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> command2;
			q.push(command2);
		}
		else if (command == "front") {
			if (q.empty() == 1) {
				cout << "-1" << "\n";
			}
			else if (q.empty() == 0) {
				cout << q.front() << "\n";
			}
		}
		else if (command == "back") {
			if (q.empty() == 1) {
				cout << "-1" << "\n";
			}
			else if (q.empty() == 0) {
				cout << q.back() << "\n";
			}
		}
		else if (command == "size") {
			cout << q.size() << "\n";
		}
		else if (command == "empty") {
			if (q.empty() == 1) {
				cout << "1" << "\n";
			}
			else if (q.empty() == 0) {
				cout << "0" << "\n";
			}
		}
		else if (command == "pop") {
			if (q.empty() == 1) {
				cout << "-1" << "\n";
			}
			else if (q.empty() == 0) {
				cout << q.front() << "\n";
				q.pop();
			}
		}
	}



	return 0;
}