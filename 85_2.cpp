/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void boi09(int n){
	queue<ll> q;
	q.push(9);
	ll t=q.front();q.pop();
	while(t%n!=0){
		q.push(t*10);
		q.push(t*10+9);
		t=q.front();q.pop();
	}
	cout<<t<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		boi09(n);
	}
	return 0;
}

