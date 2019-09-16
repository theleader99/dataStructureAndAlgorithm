/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;
int N;
char a[105][1005];
typedef pair<pair<int,int>,int> ppi;
pair<int, int> m, n;
int minStep(pair<int, int> m, pair<int, int> n){
	ppi p;
	p.fi = m;
	p.se = 0;
	queue<ppi > q;
	set<pair<int, int> > visit;
	visit.insert(m);
	q.push(p);
	while(!q.empty()){
		ppi t = q.front(); q.pop();
		if(t.fi == n)
			return t.se;
		for(int i=t.fi.fi-1;i>=0;i--){
			if(a[i][t.fi.se] == 'X')
				break;
			pair<int,int> tmp;
			tmp.fi = i;
			tmp.se = t.fi.se;
			if(visit.find(tmp)==visit.end()){
				ppi tmp2;
				tmp2.fi = tmp;
				tmp2.se = t.se +1;
				q.push(tmp2);
				visit.insert(tmp);
			}
		}
		
		for(int i = t.fi.fi+1; i <N ;i++){
			if(a[i][t.fi.se] == 'X')
				break;
			pair<int,int> tmp;
			tmp.fi = i;
			tmp.se = t.fi.se;
			if(visit.find(tmp)== visit.end()){
				ppi tmp2;
				tmp2.fi = tmp;
				tmp2.se = t.se +1;
				q.push(tmp2);
				visit.insert(tmp);
			}
		}
		
		for(int i=t.fi.se-1;i>=0;i--){
			if(a[t.fi.fi][i]== 'X')
				break;
			pair<int,int> tmp;
			tmp.fi = t.fi.fi;
			tmp.se = i;
			if(visit.find(tmp)== visit.end()){
				ppi tmp2;
				tmp2.fi = tmp;
				tmp2.se = t.se +1;
				q.push(tmp2);
				visit.insert(tmp);
			}
		}
		
		for(int i=t.fi.se+1;i<N;i++){
			if(a[t.fi.fi][i]== 'X')
				break;
			pair<int,int> tmp;
			tmp.fi = t.fi.fi;
			tmp.se = i;
			if(visit.find(tmp)== visit.end()){
				ppi tmp2;
				tmp2.fi = tmp;
				tmp2.se = t.se +1;
				q.push(tmp2);
				visit.insert(tmp);
			}
		}
	}
}
int main(){
	cin>>N;
	for(int i=0;i<N;i++)
		for(int j=0; j<N; j++)
			cin>>a[i][j];
	cin>>m.first>>m.second;
	cin>>n.first>>n.second;
	cout<<minStep(m,n)<<endl;
	return 0;
}

