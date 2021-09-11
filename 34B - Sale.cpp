#include <iostream>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long


int main()
{
    IOS
    int n  = 0, m = 0, ans = 0;
    cin >> n >> m;
    int a[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < m; i++){
        if(a[i] >= 0)
            break;
        ans -= a[i];
    }
    cout << ans;
    return 0;
}
