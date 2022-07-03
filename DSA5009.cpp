#include<bits/stdc++.h>
using namespace std;

int main () {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum+=a[i];
		}
		if(sum%2) cout <<"NO\n";
		else {
			int s[sum/2+1];
			memset(s,1,sizeof(s));
			for(int i = 0; i < n; i++) {
				for(int j = sum/2; j >= a[i]; j--) {
					if(!s[j-a[i]] || j == a[i]) s[j] = 1;
				}
			}
			if(s[sum/2]) cout <<"YES\n";
			else cout <<"NO\n";
		}
	}
}