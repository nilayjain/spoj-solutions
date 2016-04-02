#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
void multiply(char* res, char* l1, int a, char* l2, int b);
void multiply(char* res, char* l1, int a, char* l2, int b){
	int carry = 0;
	int i = 0;
	int j = 0;
	while(i< b){
		while(j < a){		
			int val = (int)(l1[i] * l2[i]) + carry; 
			res[i] = val%10;
			carry = val/10;
			i++;
	}
	return;
}
		
int main(){
	char* res = (char*)malloc(20000*sizeof(char));	
	int i;		
	char *l1,*l2;
	int t;
	cin >> t; //test cases
	for(;t>0;t--){	
	cin >> l1;
	cin >> l2;
	int a = strlen(l1);
	int b = strlen(l2);	
	for(i=0;i<a;i++) l1[i]-'0';
	for(i=0;i<b;i++) l2[i]-'0';
	for(i=0;i<a+b;i++) res[i] = '0' - '0';	
	multiply(res,l1,a,l2, b);
	for(i=0;i<a+b-1;i++) cout << res[i];
	cout << endl;
	}
	return 0;
}
