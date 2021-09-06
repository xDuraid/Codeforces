#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0, mna = INT_MAX, mnb = INT_MAX;
        long long ans = 0;
        cin >> n;
        int a[n] = {0}, b[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mna = min(mna, a[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            mnb = min(mnb, b[i]);
        }
        for(int i = 0; i < n; i++){
            ans += max(a[i] - mna, b[i] - mnb);
        }
        cout << ans << endl;
    }
    return 0;
}
