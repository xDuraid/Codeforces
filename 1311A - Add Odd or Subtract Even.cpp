#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        int a = 0, b = 0, ans = 0;
        cin >> a >> b;
        if(a == b)
            ans = 0;
        else if(a < b){
            if((b - a) % 2 == 0)
                ans = 2;
            else
                ans = 1;
        }
        else{
            if((a - b) % 2 == 0)
                ans = 1;
            else
                ans = 2;
        }
        cout << ans << endl;
    }
    return 0;
}
