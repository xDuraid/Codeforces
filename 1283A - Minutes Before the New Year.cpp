#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
int main()
{
    IOS
    TEST{
        int h = 0, m = 0, ans = 0;
        cin >> h >> m;
        ans = 1440 - 60 * h - m;
        cout << ans << endl;
    }
    return 0;
}
