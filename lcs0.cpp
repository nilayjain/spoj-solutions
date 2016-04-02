#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<utility>

using namespace std;
int max(int a, int b){
	return a>b?a:b;
}
int main(){
	string str1,str2;
	cin >> str1 >> str2;
	int m = str1.length();
	int n =  str2.length();
	char s1[m+1],s2[n+1];
	strcpy(s1+1,str1.c_str());
	strcpy(s2+1,str2.c_str());
	vector< vector<int> > p(2, vector<int>(n+1,0));
	//for(int i =0;i<=1;i++) p[i][0] = 0;	
	//for(int i = 0;i<=n;i++) p[0][i] = 0;
	int i;
	for(i =1;i<m+1;i++){
		for(int j = 1;j<n+1; j++){
			if(s1[i] == s2[j]) p[(i+2)%2][j] = p[(i-1+2)%2][j-1] + 1;
			else p[(i+2)%2][j] = max(p[(i-1+2)%2][j] , p[(i+2)%2][j-1]);
		}
	}
	cout<< p[(i-1+2)%2][n] << endl;
	return 0;
}
