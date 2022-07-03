
#include<bits/stdc++.h>
using namespace std;

vector<int> A[100001];
bool check[100001];
int res = 0;

void DFS(int u, int count) {
	res = max(res, count);
	check[u] = true;
	for (auto x : A[u])if (!check[x])DFS(x, count + 1);
}
int main() {
	int t; cin >> t; 
	while (t--) {
		for (int i = 0 ; i < 100001; i++) A[i].clear(),check[i]=false;
		int n; cin >> n;
		for (int i= 0 ; i < n - 1; i++) {
			int u, v; cin >> u >> v;
			A[u].push_back(v);
		}
		res = 0;
		DFS(1, 0);
		cout << res << endl;
	}
	return 0;
}
