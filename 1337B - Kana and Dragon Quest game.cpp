#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST
    {
        int x = 0, n = 0, m = 0;
        cin >> x >> n >> m;
        while(x - x / 2 > 10 && n > 0){
            x = x / 2 + 10;
            n--;
        }
        x -= m * 10;
        if(x < 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
