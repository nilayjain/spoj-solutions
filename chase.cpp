#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
pair<int,int> * arr;

int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int k,i,a,b,j;
		cin >> k;
		arr = new pair<int,int> [k];
		for(i=0;i<k;i++){
			cin >> a >> b;
			arr[i] = make_pair(a,b);
		}
		vector<double> v(k);
		for(i=0;i<k-1;i++){
			if(arr[i+1].first==arr[i].first) v[i] = 9999.0;
			v[i] = ((double)(arr[i+1].second - arr[i].second))/((double)(arr[i+1].first - arr[i].first));
		}
		sort(v.begin(),v.end());
		double maxval = v[0]; int maxtime = 1;
		double currval=v[0]; int currtime = 1;
		for(i=1;i<k-1;i++){
			if(v[i]!=v[i-1]) {
				if(currtime>maxtime) {maxtime = currtime; maxval = currval;}
				currval = v[i];
				currtime = 1;
			}
			else currtime++;
		}
		if(currtime> maxtime) maxtime = currtime;
		cout << maxtime << endl;
		delete[] arr;
	}
	return 0;
}
				
