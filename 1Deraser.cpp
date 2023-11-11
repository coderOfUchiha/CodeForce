#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int pos =0;
		int high=0;
		int low=0;
		int count=0;
		int flag=0;
		vector<int> store;

		char s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}

		// for(int i=0;i<n;i++)
		// {
		// 	if(s[i]=='B')
		// 	{
		// 		store.push_back(i);
		// 	}
		// }
		// for(int i=0;i<store.size();i++)
		// {
		// 	cout<<store[i]<<" ";
		// }
		// cout<<endl;

        // if(store.size()==0)
        // {
        // 	cout<<0<<endl;
        // }
        // else
        // {
        // 	while(high<store.size()-1)
		//         {
		// 			if(store[high+1]-store[high]<k)
		// 			{
		// 				if(store[high+1]-store[low]<k)
		// 				{
		// 					high++;
		// 				}
		// 				else
		// 				{
		// 					low=high;
		// 					high++;
		// 					count++;
		// 				}

		// 	}
		// 	else
		// 	{
		// 		// if(store[high+2]-store[high+1]>=k){
				
				    
		// 		    if(store[high+2]-store[high+1]>=k){

		// 		    		count++;
		// 		    }
		// 		    high++;
		// 		    low=high;

		// 	}
		// cout<<count<<endl;

        // }


        for(int i=0;i<n;i++)
        {
        	if(s[i]=='B')
        	{
        		i= i+k-1;
        		count++;
        	}
        }
        cout<<count<<endl;
	}	
}