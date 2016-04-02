#include<iostream>

using namespace std;

int min(int a, int b){
	return a<b?a:b;
}
int min2(int a, int b, int c){
	if(a<b && a < c) return a;
	else if( b < a && b < c) return b;
	return c;
}
int min3(int a, int b, int c, int d){
	if( a < min2(b,c,d)) return a;
	else if(b<min2(a,c,d)) return b;
	else if(c<min2(a,b,d)) return c;
	return d;
}

int main(){
	int r,k;
	k=0;
	cin >> r;
	while(r!=0){
		k++;
		int a[r][3];
		int i,j;
		for(i=0;i<r;i++)
			for(j=0;j<3;j++)
				cin >> a[i][j];
		a[0][2] += a[0][1];
		a[1][0] += a[0][1];
		a[1][1] += min2(a[0][1],a[1][0],a[0][2]);
		a[1][2] += min2(a[0][1],a[0][2],a[1][1]);
		
		for(i=2; i<r; i++){
			a[i][0] += min(a[i-1][0],a[i-1][1]);
			a[i][1] += min3(a[i][0],a[i-1][0],a[i-1][1],a[i-1][2]);
			a[i][2] += min2(a[i][1],a[i-1][1],a[i-1][2]);
			
		}
		int tatti = a[r-1][1];
		cout << k << ". " << tatti << endl;
		cin >> r;
	}
	return 0;
}
	 	
