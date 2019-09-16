/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
bool visited[1001];
vector<vector<int> > tplt;
vector<ii> dsc;
int N, M, sl;

void BFS(int u){
	vector<int> tplt1;
	tplt1.push_back(u);
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=0;i<dsc.size();i++){
			if(dsc[i].fi == t && !visited[dsc[i].se]){
				visited[dsc[i].se]=true;
				tplt1.push_back(dsc[i].se);
				q.push(dsc[i].se);
			}
			else if(dsc[i].se == t && !visited[dsc[i].fi]){
				visited[dsc[i].fi]=true;
				tplt1.push_back(dsc[i].fi);
				q.push(dsc[i].fi);
			}
		}
	}
	tplt.push_back(tplt1);
}

void TPLT_BFS(){
	for(int i=1;i<=N;i++)
		if(!visited[i]){
			sl++;
			BFS(i);
		}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		tplt.clear();
		sl=0;
		cin>>N>>M;
		for(int i=1;i<=N;i++)
			visited[i]=false;
		for(int i=1;i<=M;i++){
			int a, b;
			cin>>a>>b;
			dsc.push_back(ii(a,b));
		}
		TPLT_BFS();
		for(int i=0;i<tplt.size();i++){
			for(int j=0;j<tplt[i].size();j++)
				cout<<tplt[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

