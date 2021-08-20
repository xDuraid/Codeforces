#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    int n = 0, m = 0, r = 1000, t = 0;
    cin >> n >> m;
    int a[m] = {0};
    for(int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    n--;
    for(int i = 0; i < m - n; i++){
        t = a[i + n] - a[i];
        r = min(t,r);
    }
    cout << r;
    return 0;
}
