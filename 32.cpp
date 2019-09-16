/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
#define vc 100000007
using namespace std;
vector<int> v,b;

int main(){
	ll n,result=0;
	cin>>n;
	b.resize(n+1);
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<=n;i++){
		if(i==0)
			b.at(i)=-vc;
		else
			b.at(i)=vc;
	}
	for(int i=0;i<v.size();i++){
		ll k= lower_bound(b.begin(),b.end(),v.at(i))-b.begin();
		b.at(k)= v.at(i);
		result= max(result, k);
	}
	cout<<result<<endl;
	return 0;
}

