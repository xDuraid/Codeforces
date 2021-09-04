#include <iostream>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int a[3] = {0}, ans = 0;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    ans = a[2] - a[1] + a[1] - a[0];
    cout << ans;
    return 0;
}
