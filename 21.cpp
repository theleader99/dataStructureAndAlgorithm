/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000000000007
using namespace std;
ll *T;

ll sumTribonaci(ll n){
	if(n==1)
		return 1;
	if(n==2)
		return 3;
	if(n==3)
		return 6;
	T[1]=1;
	T[2]=2;
	T[3]=3;
	ll res=6;
	for(int i=4;i<=n;i++){
		T[i]= ((T[i-1]+T[i-2])%MOD+T[i-3])%MOD;
		res=(res+T[i])%MOD;
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		T=new ll[n+1];
		cout<<sumTribonaci(n)<<endl;
	}
	return 0;
}

