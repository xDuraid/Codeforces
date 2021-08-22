#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST
    {
        int n = 0, r = 0, q = 0;
        cin >> n;
        q = n / 2020;
        r = n % 2020;
        if(r <= q)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
