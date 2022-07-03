#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n+1];
	priority_queue<int,vector<int>,less<int>>q;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
		q.push(a[i]);
	}
	for(auto it : q) cout << it <<" ";
}