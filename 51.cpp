/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector<int> t,d;
void selectionSort();
int main(){
	int tg=0;
	cin>>n;
	t.resize(n);
	d.resize(n);
	for(int i=0;i<n;i++)
		cin>>t.at(i)>>d.at(i);
	selectionSort();
	for(int i=0;i<n;i++)
		if(t.at(i)<=tg)
			tg+=d.at(i);
		else
			tg=t.at(i)+d.at(i);
	cout<<tg<<endl;
	return 0;
	
}
void selectionSort(){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1; j<n;j++)
			if(t.at(j)<t.at(min))
				min=j;
		swap(t.at(i),t.at(min));
		swap(d.at(i),d.at(min));
	}
}

