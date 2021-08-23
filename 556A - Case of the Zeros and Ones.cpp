#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)




int main()
{
    IOS
    int n = 0, o = 0, z = 0;
    cin >> n;
    char s[n + 1];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == '0')
            o++;
    }
    z = n - o;
    cout << abs(z - o);
    return 0;
}
