#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0;cin >> t; while(t--)


int main()
{
    IOS
    TEST{
        int a = 0, b = 0, x = 0, ans = 0;
        cin >> a >> b;
        x = abs(a - b);
        if(a == b)
            ans += (a != 0);
        else if(x % 2 == 1)
            ans = -1;
        else
            ans = 2;
        cout << ans << endl;
    }
    return 0;
}
