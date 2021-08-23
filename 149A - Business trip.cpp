#include <iostream>
#include <algorithm>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)




int main()
{
    IOS
    int k = 0, m = 0, s = 0, n = 12;
    int a[n] = {0};
    cin >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(int i = n - 1; i >= 0; i--){
        if(s >= k)
            break;
        s += a[i];
        m++;
    }
    if(s < k)
        m = -1;
    cout << m;
    return 0;
}
