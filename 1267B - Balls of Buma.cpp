#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


void solve()
{
    string s;
    vector<pair<int,char>> a;
    cin >> s;
    for(int i = 0; i < s.ln; i++){
        int j = i;
        while(s[j] == s[i] && j < s.ln){
            j++;
        }
        a.push_back({j - i, s[i]});
        i = j - 1;
    }
    if(a.sz & 1 == 0){
        cout << 0;
        return;
    }
    int i = 0, j = a.sz - 1;
    while(i < j){
        if(a[i].fi + a[j].fi < 3 || a[i].se != a[j].se){
            cout << 0;
            return;
        }
        i++;
        j--;
    }
    if(a[i].fi > 1)
        cout << a[i].fi + 1;
    else
        cout << 0;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}

