#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

int main()
{
    IOS
    TEST
    {
        ll n = 0, pow = 1, ans = 0;
        cin >> n;
        ans = n * (n + 1) / 2;
        while(pow <= n){
            pow = pow << 1;
        }
        
        ans -= 2 * (pow - 1);
        cout << ans << endl;
    }
    return 0;
}
