#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	cin.ignore(); 
	while(t--){
		string s;
		int d=1; getline(cin,s);
		stack<int> ans;
		vector<int> res; 
		for(int i=0;i<s.length();i++) {
			if(s[i]=='(') {
				ans.push(d);
				res.push_back(d);
				d++; 
			}
			if(s[i]==')') {
				res.push_back(ans.top());
				ans.pop(); 
			} 
		} 
		for(int i=0;i<res.size();i++) cout<<res[i]<<" "; 
		cout<<endl; 
	} 
}