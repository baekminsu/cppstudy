#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> vArr[1000];
int visit[1000] = { 0, };
int visit2[1000] = { 0, };

void bfs(int node) {

}

void dfs(int node) {
	visit[node] = 1;
	cout << node << " ";
	for(int i = 0; i < vArr[node].size(); i++) {
		int nextNode = vArr[node][i];
		if (visit[nextNode] == 1) {
			continue;
		}
		dfs(nextNode);
	}
}

int main() {
	int N, M, V;
	cin >> N >> M >> V;
	int V1, V2;
	for (int i = 0; i < M; i++) {
		cin >> V1 >> V2;
		vArr[V1].push_back(V2);
		vArr[V2].push_back(V1);
	}
	dfs(V);
	bfs(V);
	cout << "\n";
	return 0;
}