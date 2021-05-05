#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    string s;
    cin >> s;
    if(s[0] > 'Z')
        s[0] -= 32;
    cout << s;
    return 0;
}
