#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()

int main()
{
    IOS
    TEST{
        int n = 0, odd = 0, x = 0;
        cin >> n;
        for(int i = 0; i < 2 * n; i++){
            cin >> x;
            if(x % 2 == 1)
                odd++;
        }
        if(odd == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
