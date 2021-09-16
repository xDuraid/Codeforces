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

    TEST
    {
        ll n = 0, ans = 0, sum = 0, x = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            sum += x;
        }
        x = sum % n;
        ans = x * (n - x);
        cout << ans << endl;
    }
    return 0;
}
