/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
struct node{
	int val;
	int lv;
};
vector<int> snt;
bool checkSNT(int n){
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}
bool checkDif(int a, int b){
	int dem=0;
	while(a>0){
		if(a%10 != b%10)
			dem++;
		a/=10;
		b/=10;
	}
	return (dem==1);
}
void timSNT(){
	for(int i=1001;i<10000;i+=2 ){
		if(checkSNT(i))
			snt.push_back(i);
	}
}
int minStep(int a, int b){ // BFS 
	node n={a,0},t;
	set<int> visit;
	queue<node> q;
	q.push(n);
	while(!q.empty()){
		t=q.front();q.pop();
		visit.insert(t.val);
		if(t.val==b)
			return t.lv;
		if(checkDif(t.val,b))
			return t.lv+1;
		for(int i=0;i<snt.size();i++){
			if( checkDif(t.val,snt.at(i)) && visit.find(snt.at(i))== visit.end()){
				n.val=snt.at(i);
				n.lv=t.lv+1;
				q.push(n);
			}
		}		
	}
}
int main(){
	int t;
	cin>>t;
	timSNT();
	while(t--){
		int a, b;
		cin>>a>>b;
		cout<<minStep(a,b)<<endl;
	}
	return 0;
}

