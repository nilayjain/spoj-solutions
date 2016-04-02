#include<iostream>
using namespace std;

int main(){
	int has[4];
	int one[4];
	int i;
	for(i=0;i<4;i++) cin >> has[i];
	for(i=0;i<4;i++) cin >> one[i];
	while(has[0]!=-1){
		int add[4];
		int money[4];
		int flag=0;
		for(i=0;i<4;i++) {if(has[i]>=one[i]) {flag = 1;} }
		for(i=0;i<4;i++) {
			if(has[i] >= one[i]){
					if(has[i]%one[i]==0) {add[i] = has[i]/one[i]; money[i] = 0;}
					else {add[i] = has[i]/one[i]; money[i] = has[i]%one[i];}
				}
				else{
					add[i] = 0; money[i] = has[i];
				}
			}
		int temp = add[0]; int j=0;
		if(flag==0){
			if(has[0]==0&&has[1]==0&&has[2]==0&&has[3]==0) {for(i=0;i<3;i++) cout << "0 "; cout << "0" << endl;}
			else{for(i=0;i<3;i++) cout << one[i]-money[i] << " ";
			cout << one[3]-money[3] << endl;}
	}else{	
		for(i=1;i<4;i++) {if(add[i] > temp) {temp = add[i];j=i;}}
		if(money[j]!=0){ temp++; }
		for(i=0;i<3;i++) cout << (temp-add[i])* one[i] -money[i] << " ";
		cout << (temp-add[3]) * one[3] -money[3] << endl;
		}
		for(i=0;i<4;i++) cin >> has[i];
		for(i=0;i<4;i++) cin >> one[i];
	}
	return 0;
}
