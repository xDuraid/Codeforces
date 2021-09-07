#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        int n = 0;
        cin >> n;
        cout << n << " ";
        for(int i = 1; i < n; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
