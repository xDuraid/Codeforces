#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        string s;
        cin >> s;
        int x = 0, ans = s.size();
        ans = ans * (ans + 1) / 2;
        ans += (s[0] - '1') * 10;
        cout << ans << endl;
    }
    return 0;
}
