#include<iostream>
#include<cstring>
#include<cmath>
#define MAX 20000
using namespace std;
char str1[MAX+5];
char str2[MAX+5];

int min(int a, int b){
	return a<b?a:b;
}

int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int n,k;
		cin >> n >> k;
		cin >> str1;
		for(int i = 0 ; i< n; i++) str2[i] = '0';
		char temp = str1[0];
		int index = 0;
		int sim =1;
		int maxsim = 1;
		int maxindex = 0;
		int endindex = 0;
		for(int i = 1; i<n; i++){
			if(temp!=str1[i]){
				if(sim > maxsim) {maxsim = sim; maxindex = index; endindex = i-1;}
				sim = 1;
				index = i;
				temp = str1[i];
			}
			else sim++;	 
		}
		if(sim > maxsim ) {maxsim = sim; maxindex = index; endindex = n-1;}

		if(maxsim < k) {cout << "-1" << endl; continue;}

		int count = 0; int escape = 0;
		for(int i = 0; i<maxindex; i++){
			if(str2[i] == str1[i] && escape<k) {escape++; continue;}
			count++;
			escape=1;
			for(int j= i; j<min(n,i+k); j++) str2[j] = str1[i];
		}
		escape = 0;
		for(int i = n-1; i>endindex; i--){
			if(str2[i] == str1[i] && escape<k){escape++; continue;}
			count++;
			escape=1;
			for(int j=i; j>=i-k+1; j--) str2[j] = str1[i];
		}
		
		double p =  ceil((double)(endindex-maxindex+1)/(double)k);	
			
		count+= (int)p;
		cout << count << endl;
	}
	return 0;
}
			 
