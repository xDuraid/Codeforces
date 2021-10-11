#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define sz size()
#define pb push_back
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


void solve()
{
    string s;
    bool flag = 1;
    cin >> s;
    for(int i = 1; i < s.ln; i++)
    {
        if(s[i] > 'Z'){
            flag = 0;
            break;
        }
    }
    if(flag){
        for(int i = 0; i < s.ln; i++){
            if(s[i] > 'Z')
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
