#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
