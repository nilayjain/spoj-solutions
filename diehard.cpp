#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int h,a;
		cin >> h >> a;
		int time=1;
		int wh = -5; int wa = -10;
		int fh = -20; int fa = 5;
		h+=3; a+=2;
		while(h>=0 && a>=0){
			if(4*(h-20) > 3*(a-10) && h-20>0){
				h+=fh;
				a+=fa;
			}
			else{
				h+=wh;
				a+=wa;
			}
			if(h<=0 || a<=0) break;
			h+=3;
			a+=2;
			time+=2;
		}
		cout << time << endl;
	}
	return 0;
}
