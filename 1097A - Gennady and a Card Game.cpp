#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
int main()
{
    IOS
    
    string h, t;
    getline(cin, h);
    getline(cin, t);
    for(int i = 0; i < t.size(); i++){
        if(h[0] == t[i] || h[1] == t[i]){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
