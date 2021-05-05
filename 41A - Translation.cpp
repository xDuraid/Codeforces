#include <iostream>
#include <string>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[n-i-1] != t[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
