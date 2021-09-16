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
        ll a = 0, b = 0, gcd = 0, mvs = 0;
        cin >> a >> b;
        if(b > a)
            swap(a, b);
        gcd = a - b;
        if(gcd == 0){
            mvs = 0;
        }
        else{
            mvs = min(a % gcd, gcd - (a % gcd));
        }
        cout << gcd << " " << mvs << endl;
    }
    return 0;
}
