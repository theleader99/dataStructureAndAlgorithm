/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, s;
	cin>>n>>s;
	ll *a= new ll[n+1];
	ll *C= new ll[n+1]; // C[i] - 1 neu co the co day con trong bang i, 0 neu ko the
	C[0]=1;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		C[i]=0;
	}
	for(ll i=1;i<=n;i++)
		for(ll j=s;j>=a[i];j--)
			if(C[j-a[i]] && !C[j]) // neu co the co day con con bang j-a[i] thi co the co day con co trong bang j
				C[j]=1;
	if(C[s])
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

