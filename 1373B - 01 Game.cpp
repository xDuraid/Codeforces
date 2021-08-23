#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        string s;
        int o = 0, z = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                z++;
        }
        o = s.size() - z;
        if(min(o, z) % 2 == 0)
            cout << "NET";
        else
            cout << "DA";
        cout << endl;
    }
    return 0;
}
