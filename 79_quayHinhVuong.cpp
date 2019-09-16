/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define vii pair<vector<int>,int> 
using namespace std;

vector<int> a(6), b(6);
int minStep(vector<int> a, vector<int> b){
	vii t;
	t.first=a;
	t.second=0;
	set<vector<int> > visit;
	queue<vii> q;
	q.push(t);
	while(!q.empty()){
		t= q.front();q.pop();
		visit.insert(t.first);
		if(t.first== b)
			return t.second;
			
		vector<int> l=t.first;
		l.at(0)=t.first.at(3);
		l.at(3)=t.first.at(4);
		l.at(4)=t.first.at(1);
		l.at(1)=t.first.at(0);
		
		vector<int> r=t.first;
		r.at(1)=t.first.at(4);
		r.at(4)=t.first.at(5);
		r.at(5)=t.first.at(2);
		r.at(2)=t.first.at(1);
		
		if(l== b || r == b)
			return t.second+1;
		if(visit.find(l)== visit.end()){
			q.push(vii(l,t.second+1));
			visit.insert(l);
		}
		if(visit.find(r)== visit.end()){
			q.push(vii(r,t.second+1));
			visit.insert(r);
		}
	}
}
int main(){
	for(int i=0;i<6;i++)
		cin>>a.at(i);
	for(int i=0;i<6;i++)
		cin>>b.at(i);
	cout<<minStep(a,b)<<endl;
	return 0;
}

