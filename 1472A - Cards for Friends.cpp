#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int solve(int a, int b)
{
    int r = 1;
    while(a % 2 == 0){
        r *= 2;
        a /= 2;
    }
    while(b % 2 == 0){
        r *= 2;
        b /= 2;
    }
    return r;

}

int main()
{
    IOS
    TEST{
        int w = 0, h = 0, n = 0, ans = 0;
        cin >> w >> h >> n;
        ans = solve(w, h);
        if(ans >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
