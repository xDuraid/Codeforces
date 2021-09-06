#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0;
        long long ans = 0, x = 0;
        cin >> n;
        x = (1 << (n/2)) - 2;
        ans = 2 * x + 2;
        cout << ans << endl;
    }
    return 0;
}
