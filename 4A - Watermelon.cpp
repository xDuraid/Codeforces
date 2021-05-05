#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int w = 0;
    cin >> w;
    if(w % 2 == 0 && w != 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
