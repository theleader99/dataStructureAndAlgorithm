/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string str;
		stack<char> s;
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			char c= str[i];
			if(c=='(' || c=='{' || c=='[')
				s.push(c);
			else if((c== ')' || c=='}' || c==']')){
				if(c== ')' && s.top()=='(')
					s.pop();
				else if(c== '}' && s.top()=='{')
					s.pop();
				else if(c== ']' && s.top()=='[')
					s.pop();
			}
			else
				break;
		}
		if(s.empty())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

