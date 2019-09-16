/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
vector<vector<int> > v;
int n, m, FOPT; // n hang, m cot
int sizeOfMaxSquare();
int sizeOf(int, int);
int main(){
	int t;
	cin>>t;
	while(t--){
		v.clear();
		cin>>n>>m;
		v.resize(n);
		for(int i=0;i<v.size();i++)
			for(int j=0;j<m;j++){
				int x;
				cin>>x;
				v.at(i).push_back(x);
			}
		cout<<sizeOfMaxSquare()<<endl;
	}
	return 0;
}
int sizeOfMaxSquare(){
	FOPT= 0;
	for(int i= 0; n- i> FOPT; i++){
			for(int j= 0;m- j> FOPT; j++)
				if(v.at(i).at(j)== 1){
					int tmp = sizeOf(i,j);
					if(tmp > FOPT)
						FOPT= tmp;
				}
	}
}
int sizeOf(int a, int b){
	int s= 1, ok= 1;
	while(ok){
		for(int i=a;i<=a+s;i++){
			for(int j=b;j<=b+s;j++)
				if(v.at(i).at(j)== 0){
					ok=0;
					break;
				}
			if(ok==0)
				break;
		}
		if(ok==0)
			break;
		else
			s++;	
	}
	return s;
}

