#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int n = 0, x = 0, y = 0, z = 0, a = 0, b = 0, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if(x || y || z)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
