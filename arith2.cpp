#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
	int t;
	string str1;
	int i;	
	cin >> t;
	for(;t>0;t--){
		cout<<endl;
		cin<< str1;
		char ch[100];
		strcpy(ch,str1.c_str());
		i=1;
		int flag = 0;
		long long int sum = (int)ch[0] - '0';
		while(i<strlen(str1)){
			if(ch[i]=='-1') break;
			else if(ch[i] == ' ') {i++; continue;}
			else if(ch[i] == '+'){ flag = 0;}
			else if(ch[i] == '-'){ flag = 1;}
			else if(ch[i] == '*'){ flag = 2;}
			else if(ch[i] == '/'){ flag = 3;}
			else{
				if(flag==0) sum+=((int)ch[i]-'0');
				if(flag==1) sum-=((int)ch[i]-'0');
				if(flag==2) sum*=((int)ch[i]-'0');
				if(flag==3) sum/=((int)ch[i]-'0');
			}
			i++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
