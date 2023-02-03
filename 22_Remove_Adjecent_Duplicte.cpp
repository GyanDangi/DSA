#include <bits/stdc++.h>

using namespace std;

string removeAdjc(string s){

	stack<char> ch;
	string ans="";
	for (int i = 0; i < s.length(); i++)
	{
		if(ch.size()==0){
			ch.push(s[i]);
		}
		else if(s[i]==ch.top()){

			ch.pop();

		}
		else{
			ch.push(s[i]);
		}
	}

	while(ch.size()!=0){
		ans +=ch.top();
		ch.pop();
	}

	reverse(ans.begin(),ans.end());
	return ans;
	
}

int main(){

	string str="abbbaca";
	cout<<removeAdjc(str);

	return 0;
}