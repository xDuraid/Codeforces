#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int n = 0;
    cin >> n;
    if(n % 2 == 0)
        cout << n - 4 << " " << n - (n - 4);
    else
        cout << n - 9 << " " << n - (n - 9);
    return 0;
}
