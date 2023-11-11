#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[6];
        int i, sum1 = 0, sum2 = 0;
        for (i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < 6; i++)
        {

            if (i < 3)
            {
                sum1 = sum1 + a[i];
            }
            else
            {
                sum2 = sum2 + a[i];
            }
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}