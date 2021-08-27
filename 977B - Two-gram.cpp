#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    IOS
    int n = 0, r = 0;
    string s, ans;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++){
        string t = "";
        t += s[i];
        t += s[i + 1];
        int m = 0;
        for(int j = 0; j < n - 1; j++){
            if(s[j] == t[0] && s[j + 1] == t[1])
                m++;
        }
        if(m > r){
            r = m;
            ans = t;
        }
    }
    cout << ans;

    return 0;
}
