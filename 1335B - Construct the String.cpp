#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST
    {
        int n = 0, a = 0, b = 0;
        string s = "abcdefghijklmnopqrstuvwxyz";
        string r = "";
        cin >> n >> a >> b;
        for(int i = 0; i < n; i++){
            r += s[i % b];
        }
        cout << r << endl;
    }
    return 0;
}
