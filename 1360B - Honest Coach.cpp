#include <iostream>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0, ans = INT_MAX;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 1; i < n; i++)
            ans = min(ans, a[i] - a[i - 1]);
        cout << ans << endl;
    }
    return 0;
}
