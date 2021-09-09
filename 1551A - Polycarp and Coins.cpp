#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST{
        int n  = 0, c1 = 0, c2 = 0;
        cin >> n;
        c1 = n / 3;
        c2 = c1;
        n -= c1 + c2 * 2;
        if(n == 1)
            c1++;
        else if(n == 2)
            c2++;
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}
