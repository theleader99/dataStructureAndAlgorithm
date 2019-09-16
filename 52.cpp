/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
string cpystr(string, int, int);
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int ok = 0;
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		int l1=s1.length();
		int l2=s2.length();
		if(s1==s2)
			cout<<"YES"<<endl;
		else
		{
			for(int i=0;l1-i>=l2;i++)
				if(s1[i]==s2[0])
					if(cpystr(s1,i,i+l2-1)==s2){
						ok=1;
						break;	
					}
			if(ok)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
string cpystr(string s, int l, int r){
	string tmp="";
	for(int i=l;i<=r;i++)
		tmp+=s[i];
	return tmp;
}

