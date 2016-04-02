#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int a[4],i;
	int j=1;
	while(cin >> a[0]){
		for(i=1;i<4;i++) cin >> a[i];
		sort(a,a+4);
		cout << "Case " << j <<": "<< a[2] + a[3] << endl;
		j++;
	}
	return 0;
}
