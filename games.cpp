#include<iostream>
#include<cmath>
using namespace std;

long hcf(long n1,long n2)
{
    if (n2!=0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		double avg;
		cin >> avg;
		long a = (long)avg;
		if(avg==0){
			cout << 0 << endl;
			continue;
		}
		if(avg-a==0) {
			cout << 1 << endl;
			continue;	
		}
		avg = avg* 10000;
		long h = hcf(avg,10000);
		long val = 10000/h;
		if(val<0) val = -val;
		cout << val << endl;
	}
	return 0;
}


