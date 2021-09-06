#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0, odd = 0, even = 0, f = 0, ans = -1;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0)
                even++;
            else
                odd++;
            if(a[i] % 2 != i % 2)
                f++;
        }
        if((n % 2 == 0 && odd != even) || (n % 2 == 1 && odd != even - 1))
            ans = -1;
        else
            ans = f / 2;
        cout << ans << endl;
    }
    return 0;
}
