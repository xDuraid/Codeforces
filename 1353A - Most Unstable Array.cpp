#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        int n = 0, m = 0;
        cin >> n >> m;
        if(n == 1)
            cout << 0 << endl;
        else if(n == 2)
            cout << m << endl;
        else
            cout << 2 * m << endl;
    }
    return 0;
}
