#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string line;
	int i;
	vector<string> v[n];
	for(i=0;i<n;i++){
		getline(cin, line);
		string buf;
		stringstream ss(line);
		while(ss >> buf) v[i].push_back(buf);
	}
		
