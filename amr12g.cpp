#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
int func(vector<int>& v, int k){
	for(int i=0;i<v.size();i++){
		if(v[i]>=k) return i;
	}
	return v.size();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		vector<int> v(n,0);
		char str[m+1];
		int sum=0;
		for(int i=0; i<n;i++){
			cin >> str;
			for(int j=0; j<m;j++){
				if(str[j]=='*') {v[i]++; sum++;}
			}
			//cout << sum << endl;
		}
		sort(v.begin(),v.end()); //sort in ascending order
		//find lowest x s.t v[x]>=m/2
		int z;
		if(m%2==0) z = m/2;
		else z = m/2 + 1;
		int x = func(v,z);
		int flag=0; int min; int kcopy = k;
		if(k<=x) {flag=1; min = k;}
		else min = x;
		//cout << x << endl;
		for(int i = 0; i<min; i++){
			int temp = m-v[i];
			sum = sum-v[i];
			v[i] = temp;
			sum = sum+v[i];
			kcopy--;
		}
		if(flag==1){cout << sum << endl; continue;}
		if(kcopy%2==0){cout<< sum<<endl; continue;}
		//find lowest x s.t v[x]>=m/2
		sort(v.begin(),v.end());
		x = func(v,z);
		int temp = m-v[x];
		//cout << temp << endl;
		sum = sum-v[x];
		v[x] = temp;
		sum = sum+v[x];
		cout<<sum<<endl;
		v.clear();
	}
	return 0;
}
		
		
