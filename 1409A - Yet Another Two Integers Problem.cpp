#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int a = 0, b = 0, t = 0;
        cin >> a >> b;
        t = abs(a - b);
        cout << (t + 9) / 10 << endl;
    }
    return 0;
}
