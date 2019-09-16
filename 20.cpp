/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007 // not 10e9+7
using namespace std;
struct maTrix{
	ll m[11][11];
};
int N, K;
maTrix operator *(maTrix a, maTrix b){
	maTrix res;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
			res.m[i][j]=0;
	for(int i=1;i<=N;i++){
		for(int t=1;t<=N;t++)
			for(int j=1;j<=N;j++)
				res.m[i][j]=(res.m[i][j]+(a.m[i][t]*b.m[t][j])) %MOD;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N>>K;
		maTrix a;
		for(int i=1;i<=N;i++)
			for(int j=1;j<=N;j++){
				cin>>a.m[i][j];
			}
		for(int i=1;i<=K-1;i++)
			a=a*a;
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++)
				cout<<a.m[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

