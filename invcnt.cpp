#include<iostream>
#include<cstdlib>
typedef unsigned long long int ll;
using namespace std;

void merge(int* a, int* b, int lo, int mid, int hi,ll &count);
void mergesort(int* a, int* b, int lo, int hi, ll &count);

void mergesort(int* a, int* b, int lo, int hi, ll &count){
	if(lo>=hi) return;
	int mid = (lo+hi)/2;
	mergesort(a,b,lo,mid, count);
	mergesort(a,b,mid+1,hi,count);
	merge(a,b,lo,mid,hi,count);
}

void merge(int* a, int* b, int lo, int mid, int hi,ll &count){
	int i = lo;
	int j = mid+1;
	for(int k = lo; k<=hi; k++) a[k] = b[k];
	for(int k = lo; k<=hi; k++){
		if(j>hi) {b[k] = a[i++];}
		else if(i>mid) {b[k] = a[j++];}
		else if(a[i] <= a[j]) {b[k] = a[i++];}
		else {b[k] = a[j++]; count+=(mid+1-i);}
	}
	return;
}
int main(){
	int t;
	cin >> t;
	for(;t>0;t--){
		int n;
		cin >> n;
		int* a = (int*) malloc(sizeof(int)*n);
		int *b = (int*) malloc(sizeof(int)*n);
		for(int i = 0; i<n;i++) {cin >> a[i]; b[i] = a[i];}
		ll count = 0;
		mergesort(a,b,0,n-1,count);
		cout << count << endl;
	}
	return 0;
}
