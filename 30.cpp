/*
	NEWPTIT
*/
#include<bits/stdc++.h> // quy hoach dong
#define ll long long
using namespace std;
int w[105], F[105][25005]; // F[i][j] - tong gia tri lon nhat khi xet tu 1 - > i va trong luong <=j
int main(){
	ll c, n;
	cin>>c>>n;
	for(int i=1;i<=n;i++)
		cin>>w[i];
	for(ll i=1;i<=n;i++)
		for(ll j=0;j<=c;j++){
			F[i][j]=F[i-1][j]; // neu ko chon vat thu i
			if(w[i]<=j) // neu chon vat thu i
				F[i][j]=max(F[i-1][j],w[i]+F[i-1][j-w[i]]);
		}
	cout<<F[n][c];
	return 0;
}

