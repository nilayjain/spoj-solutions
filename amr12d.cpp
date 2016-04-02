#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	string s;
	for(;t>0;t--){
		cin >> s;
		string s2=s;
		reverse(s.begin(),s.end());
		if(s2.find(s)!=string::npos) {cout<<"YES"<<endl;}
		else cout<<"NO"<<endl;
	}
	return 0;
}	
