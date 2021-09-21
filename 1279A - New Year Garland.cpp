#include <iostream>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


int main()
{
    IOS
    TEST
    {
        ll a[3] = {0};
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if(a[2] <= a[0] + a[1] + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
