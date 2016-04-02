#include<bits/stdc++.h>
#include<cstring>
#define MAX 1000
using namespace std;

// A = 65... Z = 90 ; a = 97 ... z = 122
char str[MAX+5];

int main(){
	while(cin >> str){
	int length = strlen(str) - 1;
	int caps=0,small=0;
	int count = 0;
	for(int i = 0; i<= length; i++){
		count++;
		if(str[i] < 'a') {
			if(count%2==0) caps++; else small++;
		}
		if(str[i] >= 'a'){
			if(count%2==0) small++; else caps++;
		}
	}
	int min = caps<small?caps:small;
	cout << min << endl;
	}
	return 0;
}
