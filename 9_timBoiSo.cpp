/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int res[505];
bool visited[505];
void Init(){
	int dem=0;
	queue<int> q;
	q.push(9);
	while(dem<500){
		int t=q.front();q.pop();
		for(int i=1;i<=500 && i<=t;i++)
			if(t%i==0 && !visited[i]){
				visited[i]=true;
				res[i]=t;
				dem++;
			}
		q.push(t*10);
		q.push(t*10+9);
	}
}
int main(){
	int t;
	cin>>t;
	Init();
	while(t--){
		int n;
		cin>>n;
		cout<<res[n]<<endl;
	}
	return 0;
}
