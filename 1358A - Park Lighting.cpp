#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST{
    int n = 0, m = 0, squares = 0;
    cin >> n >> m;
    squares = n * m;
    cout << (squares + 1) / 2 << endl;
    }
    return 0;
}
