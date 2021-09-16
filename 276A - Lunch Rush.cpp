#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<stream_size>::max(), '\n');

int main()
{
    IOS

    ll n = 0, k = 0, f = 0, t = 0, ans = -1 * INT_MAX;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> f >> t;
        if(t > k){
            ans = max(ans, f - t + k);
        }
        else{
            ans = max(ans, f);
        }
    }
    cout << ans;
    return 0;
}
