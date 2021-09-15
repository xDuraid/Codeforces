#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
int main()
{
    IOS
    int n = 0, a = 0, p = 0, x = 100, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> p;
        x = min(x, p);
        ans += a * x;
    }
    cout << ans;
    return 0;
}
