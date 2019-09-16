/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n, q;
vector<int> x;
int Tim(int , int , int);
int main(){
	int t;
	cin>>n;
	x.resize(n);
	for(int i=0;i<n;i++)
		cin>>x.at(i);
	sort(x.begin(),x.end());
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>t;
		cout<<Tim(t,0,n-1)<<endl;
	}
	
	return 0;
}
int Tim(int t, int left, int right){
	if(left>right)
		return 0;
	int mid = (right+left)/2;
	if(t>= x.at(mid))
		return mid-left+1+Tim(t,mid+1,right);
	else // t<x.at(mid)
		return Tim(t,left,mid-1);
}
