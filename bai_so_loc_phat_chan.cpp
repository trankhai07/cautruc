#include<bits/stdc++.h>
using namespace std;
int n,d,a[100]; 
void in(int k) {
	for(int i=1;i<=k;i++) if(a[i]==0) cout<<"6"; else cout<<"8"; 
	for(int i=k;i>0;i--) if(a[i]==0) cout<<"6"; else cout<<"8"; 
	cout<<" "; 
} 
void sinh(int j,int k){
	for(int i=0;i<2;i++) {
		a[j]=i;
		if(j==k){
			if(d<n){
				d++;
				in(k); 
			} 
		} else sinh(j+1,k); 
	}
} 
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n; 
		d=0;  
		int m=1; 
		while(d<n){ 
			sinh(1,m);
			m++;
		} 
		cout<<endl; 
	} 
}