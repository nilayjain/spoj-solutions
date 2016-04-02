#include<bits/stdc++.h>

using namespace std;

int recu(vector<vector <char> >& m, int posi, int posj, char face, int lenx, int leny){
	count = 0;
	if(m[posi][posj]=='T') count = 1;
	if(face=='r'){
		if((posi==lenx && posj == leny)) return count;
		if(posi==lenx && m[posi][posj+1]!='#') { face = 'l'; return count + recu(m,posi,posj+1,face, lenx , leny);}
		if(posj == leny && m[posi+1][posj]!='#') return count + recu(m,posi+1,posj,face,lenx,leny);
		int ans = count + max(recu(m,posi+1,posj,face,lenx,leny),recu(m,posi,posj+1,'l',lenx,leny));
		dp[posi][posj] = ans;
	}else if(face=='l'){
		if(posi==1 && posj==leny) return count;
		if(posi==1 && m[posi][posj+1]!='#'){ face = 'r'; return count + recu(m,posi,posj+1,face,lenx,leny);}
		if(posj==leny && m[posi-1][posj]!='#') return count + recu(m,posi-1,posj,face,lenx,leny);
		int ans = count + max(recu(m,posi-1,posj,face,lenx,leny),recu(m,posi,posj-1,'l',lenx,leny));
		dp[posi][posj] = ans;
	}
	return ans;
}
		

int main(){
	int t;
	cin >> t;
	for(; t>0; t--){
		int a, b;
		cin >> a >> b;
		vector<vector <char> > m(a+1, vector<char>(b+1));
		for(int i=1; i<=a; i++)
			for(int j = 1;  j<=b ; j++)
				cin >> m[i][j];
		cout << recu(m, posi, posj, face) << endl;
		m.clear();
	}
	return 0;
}			
