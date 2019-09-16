/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull soUocChan(ull);
int main(){
	int t;
	cin>>t;
	while(t--){
		ull n;
		cin>>n;
		cout<<soUocChan(n)<<endl;
	}
	return 0;
}
ull soUocChan(ull n){
	ull dem=0, i;
	if(n%2==1)
		return 0;
	for( i=1;i*i<=n;i++){
		if(n%i== 0 ){
			if(i%2== 0)
				dem++;
			if(n/i %2 ==0)
				dem++;
		}
	}
	i--;
	if(i*i==n)
		return dem-1; 
	return dem;
}
