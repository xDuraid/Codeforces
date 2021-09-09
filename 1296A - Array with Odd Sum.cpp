#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
int main()
{
    IOS
    TEST{
        int n = 0, odd = 0, even = 0, ans = 1;
        cin >> n;
        int x = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x % 2 == 0) 
              even++;
            else 
              odd++;
        }
        if(odd == 0 || (odd % 2 == 0 && even == 0)) 
          ans = 0;
        cout << (ans == 1 ? "YES" : "NO") << endl;
    }

    return 0;
}
