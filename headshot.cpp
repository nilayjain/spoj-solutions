#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
	char gun[101];
	int zero = 0;
	int cons = 0;
	cin >> gun;
	int n = strlen(gun);
	if(gun[0]=='0') zero=1;
	for(int i=1;i<n;i++){
		if(gun[i] == '0') {
			zero++;
			if(gun[i-1]=='0') cons++;
		}
	}
	if(gun[n-1]=='0' && gun[0] == '0') cons++;
	double p = (double)cons/(double)zero;
//	cout << p << endl;
	if(p==1) cout << "EQUAL" << endl;
	else if(p>0.5) cout << "SHOOT" << endl;
	else if(p<0.5) cout << "ROTATE" << endl;
	else cout << "EQUAL" << endl;
	return 0;
}		
