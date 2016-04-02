#include<cstdio>
#include<cmath>
#define rep(i,n) for(int i=1;i<=n;i++)
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int t;
	scanf("%d",&t);
	rep(i,t){
		int a, b;
		scanf("%d %d", &a,&b);
		int small = a<b?a:b;
		int great = a>b?a:b;
		int g = gcd(great,small);
		int m = (int)sqrt(g);
		int count = 0;
		rep(j,m)
			if(a%j==0 && b%j==0) count+=2;
		//if(great%small==0) count++;
		double x = sqrt((double)g) - (double) m;
		if(x==0.0) count--;
		printf("%d\n",count);
	}
	return 0;
}	
