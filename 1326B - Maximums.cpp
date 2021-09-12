#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()


int main()
{
    IOS
    ll n = 0, mx = 0;
    cin >> n;
    ll b[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> b[i];
        cout << b[i] + mx << " ";
        mx = max(mx, b[i] + mx);
    }
    return 0;
}
