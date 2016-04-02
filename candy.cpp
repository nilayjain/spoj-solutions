#include<iostream>
using namespace std;
int main(){
	int n=0;
	while(n!=-1){
		cin>>n;
		if(n==-1) break;
		int a[n];
		int i =0;
		int sum =0;
		for(i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		if(sum%n!=0) { cout << "-1" << endl; continue;}
		int avg = sum/n;
		int j =0; int output = 0;
		i=0;	
		while(i<n){
			while(j<n){
			if(a[j]>avg) break;
			j++;
			}	
			if(a[i]<avg){
				int diffi = avg-a[i];
				int diffj = a[j]-avg;
				if(diffj >= diffi){
					a[j]-=diffi;
					a[i]+=diffi;
					output+=diffi;
					i++;
					continue;
				}else{
					a[j]-=diffj;
					a[i]+=diffj;
					output+=diffj;
					continue;
				}
			}
			i++;
		}
		cout << output <<endl;
	}
	return 0;
}
