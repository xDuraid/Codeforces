#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n = 0;
    string s = "ROYGBIV";
    cin >> n;
    for(int i = 7; i < n; i++){
        s += s[i-4];
    }
    cout << s;
    return 0;

}
