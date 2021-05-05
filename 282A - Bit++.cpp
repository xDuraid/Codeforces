#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, x = 0;
    char s[4];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s[0] == '+' || s[2] == '+')
            x++;
        else if(s[0] == '-' || s[2] == '-')
            x--;
    }
    cout << x;
    return 0;
}
