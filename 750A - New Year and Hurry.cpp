#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    IOS
    int n = 0, k = 0;
    cin >> n >> k;
    int ans = 0, t = 240 - k, tn = 5;
    while(t - tn >= 0){
        ans++;
        t -= tn;
        tn += 5;
    }
    ans = min(ans, n);
    cout << ans;
    return 0;
}
