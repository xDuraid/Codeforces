#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    IOS
    int n = 0, m = 0, a = 0, b = 0;
    cin >> n >> m;
    a = min(n, m);
    b = (max(n ,m) - a) / 2;
    cout << a << " " << b;
    return 0;
}
