#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<map>
#include<utility>
#include<sstream>
#include<cstdio>
#include<cmath>
using namespace std;

map<string,int> m;
map<int,string> k;

int digits(int n){
	if(n==0) return 0;
	else return 1+digits(n/10);
}

string func(char* str, int index){
	char s[4]; int j=0;
	for(int i = index; i<index+3;i++) s[j++] = str[i];
	s[3] = '\0';
	string s2 = string(s);
	return s2;
}


int main(){
	int LOLWA = 100;	
	m["063"] = 0; m["010"] = 1; m["093"] = 2; m["079"] = 3; m["106"] = 4; m["103"] = 5; m["119"] = 6; m["011"] = 7; m["127"] = 8; m["107"] = 9;
	k[0] = "063"; k[1] = "010"; k[2] = "093"; k[3] = "079"; k[4] = "106"; k[5] = "103"; k[6] = "119"; k[7] = "011"; k[8] = "127"; k[9] = "107";
	char* str = (char*)malloc(LOLWA * sizeof(char));
	while(true){
	cin >> str;
	if(strcmp(str,"BYE")==0) break;
	int mj = strlen(str);

	char str1[100], str2[100];
	int flag = 0; int j = 0; int kj = 0;
	for(int i = 0;i<mj-1;i++){
		if(str[i] == '+') {flag = 1; str1[kj] = '\0';i++;}
		if(flag==0){
			str1[kj++] = str[i];
		}
		else str2[j++] = str[i];
	}
	str2[j] = '\0';
	int l1 = strlen(str1); int l2 = strlen(str2);
	int val1 = 0; int val2 = 0;
	for(int i =0;i<=l1-3;i+=3){
		string str3 = func(str,i);
		int temp = m.find(str3)->second;
		val1 = val1*10+temp;
	}
	for(int i =0;i<=l2-3;i+=3){
		string str3 = func(str,l1+1+i);
		int temp = m.find(str3)->second;
		val2 = val2*10+temp;
	}
	int ans = val1+val2;
	int number = digits(ans);
	char* strans = (char*)malloc(sizeof(char)*100);
	j = 0;
	int x[number];
	int y = ans; int e = 0;
	while(y>0){
		x[e++] = y%10;
		y/=10;
	}
	for(int z = number-1; z>=0; z--){
		char s[4];
		strcpy(s,k.find(x[z])->second.c_str());
		for(e=0;e<3;e++) strans[j++] = s[e];
	}
	strans[j] = '\0';
	cout << str << strans << endl;
	}
	return 0;
}
