/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std; // c(k,n) = c(k,n-1) + c(k-1,n-1)

//ll Combination(int k, int n){
//	ll res= 1;
//	for(int i=1;i<=k;i++,n--)
//		res= (res * n)%MOD / i;
//	return res;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n, k;
//		cin>>n>>k;
//		cout<<Combination(k,n)<<endl;
//	}
//	return 0;
//}
ll C[1005][1005];
int main(){
	for(ll i=0;i<=1000;i++)
		C[0][i]=1; // C(0,n) = 1 voi moi n
	for(ll j=1;j<=1000;j++)
		for(ll i=1;i<=j;i++){
			C[i][j]=(C[i][j-1]+C[i-1][j-1])%MOD;
		}
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<C[k][n]<<endl;
	}
	return 0;
}

