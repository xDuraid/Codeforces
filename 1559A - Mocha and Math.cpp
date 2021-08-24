#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        int n = 0, r = 0;
        cin >> n;
        int a[n] = {0};
        cin >> a[0];
        r = a[0];
        for(int i = 1; i < n; i++){
            cin >> a[i];
            r = r & a[i];
        }
        cout << r << endl;
    }
    return 0;
}
