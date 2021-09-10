#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
int main()
{
    IOS
    TEST{
        int n = 0, ans = 0;
        cin >> n;
        for(int i = 4; i - 1 <= n; i = i << 1){
            if(n % (i - 1) == 0){
                ans = n / (i - 1);
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
