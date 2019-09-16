/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int N, M;
vector<vector<int> > adj;
vector<bool> visited;

//void DFS(int u){
//	stack<int> s;
//	s.push(u);
//	visited.at(u)=true;
//	cout<<u<<" ";
//	while(!s.empty()){
//		int t=s.top();s.pop();
//		for(int i=0;i<adj.at(t).size();i++)
//			if(!visited.at(adj.at(t).at(i))){
//				visited.at(adj.at(t).at(i))=true;
//				cout<<adj.at(t).at(i)<<" ";
//				s.push(t);
//				s.push(adj.at(t).at(i));
//				break;
//			}
//	}
//}
void DFS(int u){
	cout<<u<<" ";
	visited.at(u)=true;
	for(int i=0;i<adj.at(u).size();i++)
		if(!visited.at(adj.at(u).at(i)))
			DFS(adj.at(u).at(i));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int u;
		cin>>N>>M>>u;
		adj.clear();
		adj.resize(N+1);
		visited.clear();
		for(int i=1;i<=N+1;i++)
			visited.push_back(false);
		for(int i=1;i<=M;i++){
			int a, b;
			cin>>a>>b;
			adj.at(a).push_back(b);
			adj.at(b).push_back(a);
		}
		DFS(u);
	}
	return 0;
}

