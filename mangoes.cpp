#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		long long int n;
		cin >> n;
		long long int k = n-2;
		long long int sum = 0;
		if(k%2==0) sum = (k*k/4);
		else sum = ((k+1)*(k+1)/4);
		cout<<sum%n<<endl;
	}
	return 0;
}
