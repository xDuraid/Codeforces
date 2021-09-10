#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0, base = 1, ans = 0;
        cin >> n;
        for(base; base <= n / 10; base = base * 10 + 1)
            ans += 9;
        for(int i = 1; i <= 9; i++){
            if(i * base <= n)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
