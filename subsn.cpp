#include<bits/stdc++.h>
#include<cstring>
using namespace std;

char str[100001];
char str2[201];
int main(){
	int t;
	cin >> t;
	for(int z = 1; z<=t; z++){	
		cin >> str;
		int length = strlen(str)-1;
		cout << length << endl;
		int q;
		cin >> q;
		cout << "Case " << z << ":" << endl;
		for(int i = 1; i<=q; i++){
			cin >>  str2;
			int length2 = strlen(str2)-1;
			int k = 0;
			for(int j = 0; j<=length; j++){
				if(k>length2) { cout << "YES" << endl; goto jump;}
				if(str[j] == str2[k]) k++;
			}
			if(k<=length2) cout << "NO" << endl;
			jump: ;
		}
	}
	return 0;
}
