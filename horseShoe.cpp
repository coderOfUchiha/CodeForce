#include <bits/stdc++.h>
using namespace std;

int main(){

	int a,b,c,d;

	cin>>a>>b>>c>>d;

	set<int>v;

	v.insert(a);
	v.insert(b);
	v.insert(c);
	v.insert(d);

	int size= v.size();

	cout<<4-size<<endl;
}