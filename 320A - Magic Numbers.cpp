#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    IOS
    string s;
    cin >> s;
    int n = s.size();
    bool ans = 1;
    int i = 0;
    while(i < n){
        if(s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
            i += 3;
        else if(s[i] == '1' && s[i + 1] == '4')
            i += 2;
        else if(s[i] == '1')
            i += 1;
        else{
            ans = 0;
            break;
        }
    }

    if(ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
