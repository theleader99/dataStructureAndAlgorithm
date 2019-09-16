/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
char *c;
vector<int> v;
int main(){
	cin>>n>>k;
	stack<int> s;
	vector<int> largest;
	for(int i=1;i<=n;i++){
		char c;
		cin>>c;
		int tmp=c-'0';
		if(s.empty())
			s.push(tmp);
		else{
			while(!s.empty() && tmp > s.top() && k>0){
				s.pop();
				k--;
			}
			s.push(tmp);
		}	
	}
	while(!s.empty() && k>0){
		s.pop();
		k--;
	}
	while(!s.empty()){
		largest.push_back(s.top());
		s.pop();
	}
	for(int i=largest.size()-1;i>=0;i--)
		cout<<largest.at(i);
	cout<<endl;
	return 0;
}


