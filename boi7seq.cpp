#include<iostream>
#include<cstdlib>
#include<climits>
#include<stack>
#include<algorithm>
#include<utility>

typedef long long int ll;
using namespace std;
stack<int> s;
int main(){
	int n;
	cin >>n;
	int* a = (int*) malloc(n*sizeof(int));
	ll ans=0;
	for(int i = 0; i<n;i++) cin >> a[i];
	for(int i = 0; i<n; i++){
		if(!s.empty() && s.top()<=a[i]){
			s.pop();
			while(!s.empty() && s.top()<=a[i]){
				ans+=s.top();
				s.pop();
			}
			ans+=a[i];
		}
		s.push(a[i]);
	}
	while(s.size()>1){
		s.pop();
		ans+=s.top();
	}
	cout << ans << endl;
	return 0;
}
