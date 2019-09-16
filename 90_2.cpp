/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int> 
#define fi first
#define se second

using namespace std;

int main(){
	int N;
	cin>>N;// so dinh
	vector<ii> dsc; // danh sach canh
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N-1;j++){
			int a;
			cin>>a;
			if(a>i)
				dsc.push_back(ii(i,a));
		}
	}
	for(int i=0;i<dsc.size();i++){
		cout<<dsc.at(i).fi<<" "<<dsc.at(i).se<<endl;
	}
	return 0;
}

