#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)




int main()
{
    IOS
    TEST{
        int n = 0, a = 0, b = 0, c = 0, d = 0;
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        cin >> n >> a >> b >> c >> d;
        x1 = n * (a - b);
        x2 = n * (a + b);
        y1 = c - d;
        y2 = c + d;
        if(x1 > y2 || x2 < y1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}
