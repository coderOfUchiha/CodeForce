#include <bits/stdc++.h>  
using namespace std;  
typedef long long ll;  
int main(){  
 ios_base::sync_with_stdio(0);  
 cin.tie(0);  
 int t = 1;  
 cin >> t;  
 while(t--){  
        int n;
        cin >> n;
        vector <long> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        ll nn = 0, pp = 0;
            for (int i=0; i<n; i++)
            {
                if (a[i] < 0)
                {
                    nn++;
                }
                else if (a[i] > 0)
                {
                    pp++;
                }
            }
        if (n > 5) 
        {
            if (nn == 0 && pp == 0 )
            {
                cout << "YES\n";
            }
            else if (nn == 1 && pp == 1)
            {
                if (abs(a[0]) == abs(a[n-1]))
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if (n == 3)
            {
                if (nn == 0 && pp == 0  nn == 0 && pp == 1  pp == 0 && nn == 1)
                {
                    cout << "YES\n";
                }
                else if (nn == 1 && pp == 1)
                {
                    if (abs(a[0]) == abs(a[2]))
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if (n == 4) 
            {
                if (nn == 0 && pp == 0  nn == 0 && pp == 1  pp == 0 && nn == 1)
                {
                    cout << "YES\n";
                }
                else if (nn == 1 && pp == 1)
                {
                    if (abs(a[0]) == abs(a[3]))
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else if (nn == 2 && pp == 2)
                {
                    if (abs(a[0]) == abs(a[1]) && abs(a[1]) == abs(a[2]) && abs(a[3]) == abs(a[2]))
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                if (nn == 0 && pp == 0  nn == 0 && pp == 1  pp == 0 && nn == 1)
                {
                    cout << "YES\n";
                }
                else if (nn == 1 && pp == 1)
                {
                    if (abs(a[0]) == abs(a[4]))
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else if (nn == 2 && pp == 2)
                {
                    if (abs(a[0]) == abs(a[1]) && abs(a[1]) == abs(a[3]) && abs(a[3]) == abs(a[4]))
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }  
 return 0;  
}