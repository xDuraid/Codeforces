#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
int main()
{
    IOS
    int n = 0, m = 0;
    cin >> n >> m;
    cout << n + (n - 1) / (m - 1);
    return 0;
}
