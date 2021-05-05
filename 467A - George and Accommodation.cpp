#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, a = 0, b = 0, r = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(b - a >= 2)
            r++;
    }
    cout << r;
    return 0;
}
