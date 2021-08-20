#include <iostream>

#include <queue>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    int n = 0, m = 0;
    cin >> n >> m;
    int t = min(n, m);
    if(t % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}
