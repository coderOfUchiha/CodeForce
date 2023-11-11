#include <bits/stdc++.h>
using namespace std;

int weight(int s[], int e[], int n){
	int m= INT_MIN;
	vector<int> pos;

	for(int i=0;i<1;i++)
	{
		for(int j=1;j<n;j++){

			if(e[j]>e[i]){

				pos.push_back(j);
			}
			if(e[j]==e[i] && s[i]==s[j])
			{
				return -1;
			}
		}
	}
	// for(int i=0;i<pos.size();i++){
	// 	cout<<pos[i]<<" ";
	// }
	if(pos.size()==0)
	{
		return s[0];
	}

	for(int i=0;i<pos.size();i++){

		if(s[0]>s[pos[i]])
		{
			m= max(m,s[pos[i]]);
		}
		else
		{
			return -1;
		}
	}
	m++;
	return m;


}

int main(){

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		int s[n], e[n];

		for(int i=0;i<n;i++)
		{
			cin>>s[i]>>e[i];
		}
		// for(int i=0;i<n;i++){
		// 	cout<<s[i]<<" ";
		// }
		// cout<<endl;
		// for(int i=0;i<n;i++){
		// 	cout<<e[i]<<" ";
		// }
		// cout<<endl;
		cout<<weight(s,e,n)<<endl;
	}
}