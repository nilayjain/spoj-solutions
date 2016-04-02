#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(;n>0;n--){
		int x,y;
		cin >> x >> y;
		if(x==y || (x-y)==2){
		int k = x+y;
		if(x%2==0 && y%2==0) cout<<k<<endl;
		else cout<<k-1<<endl;
		}else cout<<"No Number"<<endl;
	}
	return 0;
}
