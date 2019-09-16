/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int K, N, M; // K nguoi, N dinh, M canh
vector<vector<int> > adj; // danh sach ke
vector<vector<int> > path; // danh sach duong di cho K nguoi
vector<int> vt; // vi tri ban dau cua K nguoi
vector<bool> visited; 

void findPath(int i){
	queue<int> q;
	q.push(vt.at(i));
	path.at(i).push_back(vt.at(i));
	
}	

int main(){
	cin>>K>>N>>M;
	adj.resize(N+1);
	visited.resize(N+1);
	for(int i=1;i<=N;i++)
		visited[i]=false;
	vt.resize(K+1);
	for(int i=1;i<=K;i++)
		cin>>vt.at(i);
	for(int i=1;i<=M;i++){
		int a, b;
		cin>>a>>b;
		adj.at(a).push_back(b);
	}
	//
	for(int i=1;i<=K;i++){
		findPath_BFS(i);
	}
	return 0;
}

