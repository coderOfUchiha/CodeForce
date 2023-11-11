#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,k;
	cin>>n>>k;
	int i=1;
	int pro;

	while(pro%10!=k){

		pro = n*i;
		if(pro%10==0)
		{
			i++;
			break;
		}
		i++;
	}
	cout<<i-1<<endl;
}