#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int x = 0, y = 0, n = 0, k = 0, r = 0;
        cin >> x >> y >> n;
        r = n % x;
        if(r >= y)
            k = n - (r - y);
        else
            k = n - r - (x - y);
        cout << k << endl;
    }
    return 0;
}
