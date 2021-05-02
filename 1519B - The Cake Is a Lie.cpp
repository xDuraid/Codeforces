#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int t = 0;
    cin >> t;
    int x = 0, y = 0, d = 0;
    while(t--){
        cin >> x >> y >> d;
        if((x-1)+(y-1)*x == d){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;

}
