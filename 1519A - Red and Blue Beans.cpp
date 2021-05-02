#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int t = 0;
    cin >> t;
    int a = 0, b = 0, d = 0;
    while(t--){
        cin >> a >> b >> d;
        if((max(a,b)+min(a,b) - 1)/min(a,b) -1 <= d){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;

}
