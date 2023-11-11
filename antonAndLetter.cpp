#include <bits/stdc++.h>
using namespace std;

int main(){

	set<char>s;
	string letter;
	getline(cin, letter);

	int n=letter.length();

	for(int i=1;i<n-1;i+=3){

		s.insert(letter[i]);
	}
	cout<<s.size();
}