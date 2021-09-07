#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        int n = 0, ones = 0, twos = 0;
        cin >> n;
        int x = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 1)
                ones++;
            else
                twos++;
        }
        if((ones % 2 == 1) || (twos % 2 == 1 && ones == 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }
    return 0;
}
