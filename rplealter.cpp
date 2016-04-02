#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int j=1;j<=t;j++){
		int n,r;
		cin >> n >> r;
		int spy[1001]={0},spied[1001]={0};
		int flag=0;
		for(int i=1;i<=r;i++){
			int a,b;
			cin >> a >> b;
			spy[a]++;
			spied[b]++;
		}
		for(int i=1;i<=1000;i++){
			if(spy[i]>0&&spied[i]>0){
				flag=1;
				break;
			}
		}
		if(flag==1) cout << "Scenario #"<<j<<": spied"<<endl;
		else cout<<"Scenario #"<<j<<": spying"<<endl;
	}
	return 0;
}
