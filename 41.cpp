/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int n;
vector<int> v;
void interChangeSort();
int main(){
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;i++)
		cin>>v.at(i);
	interChangeSort();
	return 0;
}
void interChangeSort(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
			if(v.at(i)>v.at(j))
				swap(v.at(i),v.at(j));
		cout<<"Buoc "<<i+1<<": ";
		for(int t=0;t<n;t++)
			cout<<v.at(t)<<" ";
		cout<<endl;
	}
}
