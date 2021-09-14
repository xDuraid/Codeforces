#include <iostream>
#include <ios>
#include <limits>
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
        ll n = 0, x = 0, ans = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            ans += x - i;
            if(ans < 0){
                break;
            }
        }
        cout << (ans < 0 ? "NO" : "YES") << endl;
        IGNORE;
    }
    return 0;
}
