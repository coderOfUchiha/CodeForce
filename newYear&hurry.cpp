#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,t;
	cin>>n>>t;

	int con=240;
	int i=1;
	int count=0;

	while(con>=t){

		con= con-i*5;
		i++;

		if(con>=t)
		{
			count++;
			if(count==n){
				break;
			}
		}
	}
	cout<<count;
}