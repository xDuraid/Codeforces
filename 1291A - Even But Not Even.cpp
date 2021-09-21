#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


int main()
{
    IOS
    TEST
    {
        int n = 0, odds = 0;
        cin >> n;
        char s[n + 1];
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if((s[i] - '0') % 2 == 1)
                odds++;
        }
        if(odds <= 1)
            cout << -1;
        else{
            for(int i = 0, o = 2; o && i < n; i++){
                if((s[i] - '0') % 2 == 1){
                    cout << s[i];
                    o--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
