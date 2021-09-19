#include <iostream>
#include <algorithm>
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
        ll a[3] = {0}, ans = 0;
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if(a[0] == a[2]){
            cout << 0 << endl;
            continue;
        }
        else if(a[0] == a[1]){
            a[2]--;
            if(a[0] != a[2]){
                a[0]++;
                a[1]++;
            }
        }
        else if(a[1] == a[2]){
            a[0]++;
            if(a[2] != a[0]){
                a[1]--;
                a[2]--;
            }
        }
        else{
            a[0]++;
            a[2]--;
        }
        cout << a[2] - a[0] + a[2] - a[1] + a[1] - a[0] << endl;
    }
    return 0;
}
