#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long


int main()
{
    IOS
    int n = 0, ans = 0, mn = INT_MAX, mx = 0;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(a[i], mx);
        mn = min(a[i], mn);
    }
    ans = mx - mn + 1 - n;
    cout << ans;
    return 0;
}
