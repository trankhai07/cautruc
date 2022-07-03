#include<bits/stdc++.h>
using namespace std;
queue<string> res;
main(){
	int t;
	string m; 
	cin>>t;
	cin.ignore();
	while(t--){
		string s,d; getline(cin,s);
		stringstream ss(s);
		while(ss>> d) {
			res.push(d);
		};
		while(!res.empty()){
			m=res.front();
			for(int i=m.length()-1;i>=0;i--) cout<< m[i];
			cout<<" "; 
			res.pop();
		}
		cout<<endl;
	}
}