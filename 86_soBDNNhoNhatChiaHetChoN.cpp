/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
//ll binaryToDecimal(string b){
//	ll res=0,t=0;
//	for(int i=b.length()-1;i>=0;i--,t++ ){
//		if(b[i]=='1'){
//			res+=pow(2,t);
//		}
//	}
//	return res;
//}
//string decimalToBinary(ll de){
//	string res="";
//	while(de>0){
//		res=string(1,de%2+'0')+res;
//		de/=2;
//	}
//	return res;
//}
bool  chiaHet(string a, int b){
	ll res=0;
	for(int i=0;i<a.length();i++){
		res=res*10+a[i]-'0';
		if(res>=b)
			res=res%b;
	}
	return (res==0);
}
void minBDN(int n){
	queue<string> q;
	q.push("1");
	string t=q.front();q.pop();
	while(!chiaHet(t,n)){
		q.push(t+"0");
		q.push(t+"1");
		t= q.front();q.pop();
	}
	cout<<t<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		minBDN(n);
	}
	return 0;
}

