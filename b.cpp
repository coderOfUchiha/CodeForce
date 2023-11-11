#include <iostream>

#include <unordered_map>

using namespace std;

bool findPair(int arr[], int size, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++) {
        mpp[arr[i]]++;
    }
    for (int i = 0; i < size; i++) {
        if (mpp.find(n + arr[i]) != mpp.end()) {
            return true;
        }
    }
    return false;
}

int main()
{
    int test;
    cin >> test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; ++i)cin >> arr[i];
        if(findPair(arr,n,k))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}