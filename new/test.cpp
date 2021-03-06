#include <iostream>
#include<cstdlib>
using namespace std;
void multiply(int res[], int i, int* fill){
	int j = 0;
	int carry = 0;
	while(j <= *fill+1){
		int val = res[j] * i + carry;
		res[j] = val%10;
		carry = val/10;
		j++;
	}
	if(j>=1 && res[j-1] !=0) {*fill = j; return;}
	if(j>=2 && res[j-2] !=0) {*fill = j-1; return;} 
	return;
}

int main(){
	int* res = (int*)malloc(200 * sizeof(int*));
	int k;	
	int i = 0;	
	for (i=0;i<200;i++) res[i] = 0;
	res[0] = 1;
	int fill = 1;
	int j = 50;		
	i = 2; //now calcu its fact	
	while(i<=j){
		multiply(res,i,&fill);
		i++;
	}
	i=fill-1;
	while(i>=0) {cout<< res[i]; i--;} //print fact
	cout << endl;
return 0;
}
			
		
