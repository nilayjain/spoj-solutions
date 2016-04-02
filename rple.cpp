#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<utility>

#define for_each(it,container) \
	for(typeof(container.begin()) it = container.begin(); it!=container.end(); it++)
using namespace std;
set<int> spy;
set<int> spied;
//map<int,int> spy;
//map<int,int> spied;
int main(){
	int t,n,r,a,b,flag;
	cin >> t;
	for(int j=1;j<=t;j++){
		flag = 0;
		cin >> n >> r;
		for(int i=1;i<=r; i++){
			cin >> a >> b;
			spy.insert(a);
			spied.insert(b);
		}
		for_each(it,spy){
			if(spied.find(*it)!=spied.end()) {flag=1; break;}
		}
		if(flag==1) cout<<"Scenario #" << j << ": spied"<<endl;
		else cout<<"Scenario #"<<j<<": spying"<<endl;
		spy.clear();
		spied.clear();
	}
	return 0;
}
			
