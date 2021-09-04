#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
           s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            cout << "." << s[i];
        }
    }
    return 0;
}
