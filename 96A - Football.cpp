#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        int j = i, t = 1;
        while(s[j] == s[j + 1] && j < n){
            j++;
            t++;
        }
        if(t >= 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
