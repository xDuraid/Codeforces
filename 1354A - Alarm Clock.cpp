#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0;cin >> t; while(t--)


int main()
{
    IOS
    TEST{
        int a = 0, b = 0, c = 0, d = 0;
        long long x = 0, ans = 0;
        cin >> a >> b >> c >> d;
        if(d >= c && a > b)
            ans = -1;
        else if(a <= b){
            ans = b;
        }
        else{
            x = ((a - b) + (c - d) - 1) / (c - d);
            ans = b + x * c;
        }
        cout << ans << endl;
    }
    return 0;
}
