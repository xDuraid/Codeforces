#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        long long a = 0, b = 0, c = 0, x = 0, n = 0;
        cin >> a >> b >> c >> n;
        x = max(max(a, b), c);
        n -= (x - a);
        n -= (x - b);
        n -= (x - c);
        if(n >= 0 && n % 3 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
