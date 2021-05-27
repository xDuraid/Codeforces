#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST{
        int a = 0, b = 0;
        cin >> a >> b;
        int r = a % b;
        if(r)
            cout << b - r << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
