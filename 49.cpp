/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
vector<ll> v;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ok=0;
		cin>>n>>k;
		v.clear();
		v.resize(n);
		for(int i=0;i<n;i++)
			cin>>v.at(i);
		for(int j=0;j<n && v.at(j)<=k ; j++)
			if(v.at(j)==k){
				cout<<j+1<<endl;
				ok=1;
			}
		if(ok==0)
			cout<<"NO"<<endl;
	}
	return 0;
}

