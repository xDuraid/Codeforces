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
    int n = 0, odds = 0, x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        odds += x & 1;
    }
    cout << min(odds, n - odds);
    return 0;
}
