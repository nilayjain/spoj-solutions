#include<iostream>
//#include<cmath>
//#include<cstdlib>
using namespace std;
//int p[10000001]={0};
int main(){
	int n;
	int k = 10000001;
	int* p = new int[k];
	p[0]=0; p[1] = 1;
	int i,j;
	for(i=2;i<k;i++) p[i] = 0;
	for(i=2;i<k;i++)
		if(p[i]==0)
			for(j=i*i;j<k;j+=i)
				p[j] = i;
	while(cin >> n){
		j=n;
		cout << n << endl;
	}
	delete[] p;
	return 0;
}
