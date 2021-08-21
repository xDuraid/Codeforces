#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST
    {
        long long x = 0;
        cin >> x;
        while(x % 2 == 0){
            x /= 2;
        }
        if(x == 1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}
