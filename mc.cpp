#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<utility>
#include<vector>
#define cs1 15
#define cs2 30
#define rep(i,n) for(int i = 0; i<n;i++)
using namespace std;

int min(int a, int b){
	return a<b?a:b;
}

int main(){
	while(true){
		string str1,str2;
		cin >> str1;
		int m = str1.length();
		char s1[m+1];
		strcpy(s1+1,str1.c_str());
		if(s1[1]=='#') break;
		cin >> str2;	
		int n = str2.length();
		char s2[n+1];
		strcpy(s2+1,str2.c_str());
		vector< vector<int> > p(m+1, vector<int> (n+1, 0));
		rep(i,m+1) p[i][0] = cs1*i;
		rep(i,n+1) p[0][i] = cs2* i;
		for(int i=1;i<m+1;i++){
			for(int j=1;j<n+1;j++){
				if(s1[i]==s2[j]) p[i][j] = p[i-1][j-1];
				else p[i][j] = min(p[i-1][j]+cs1, p[i][j-1]+ cs2);
			}
		}
		cout << p[m][n] << endl;
	}
	return 0;
}
					
				 
