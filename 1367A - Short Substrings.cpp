#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        string b;
        cin >> b;
        int n = b.size();
        cout << b[0];
        for(int i = 2; i < n - 1; i += 2)
            cout << b[i];
        cout << b[n - 1];
        cout << endl;
    }
    return 0;
}
