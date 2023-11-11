#include <bits/stdc++.h>
using namespace std;

int main(){

		int n,m;

		cin>>n>>m;
		char a[n][m];

		int left=m, right=-1;
		int top=n,bottom=-1;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){

				cin>>a[i][j];
			}
		}
		// for(int i=0;i<n;i++){
		// 	for(int j=0;j<m;j++){

		// 		cout<<a[i][j];
		// 	}
		// 	cout<<endl;
		// }

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='*')
				{
					left=min(left,j);
					right= max(right,j);
					top= min(top,i);
					bottom=max(bottom,i);
				}
			}
		}

		for(int i=top;i<=bottom;i++){
			for(int j=left;j<=right;j++){

				cout<<a[i][j];
			}
			cout<<endl;
		} 
	}