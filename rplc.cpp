#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int j=1;j<=t;j++){
		int n;
		cin >> n;
		int first;
		long long int min = 0;
		long long int sum = 0;
		for(int i=0;i<n;i++){
			cin >> first;
			sum+=first;
			if (min > sum) min = sum;
		}
		//cout << min << endl;
		if(min>=0) cout << "Scenario #" << j << ": " << "1" << endl;
		else cout << "Scenario #" << j << ": " << -1*min+1 << endl;
		cout << endl;
	}
	return 0;
}
