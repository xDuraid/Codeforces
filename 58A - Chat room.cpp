#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    string s, h = "hello";
    cin >> s;
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == h[j]){
            j++;
        }
    }
    if(j == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
