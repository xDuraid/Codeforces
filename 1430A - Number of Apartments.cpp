#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

int main()
{
    IOS
    TEST
    {
        int n = 0, r3 = 0, r5 = 0, r7 = 0;
        cin >> n;
        if(n % 3 == 0){
            r3 = n / 3;
        }
        else if(n % 3 == 1){
            r7 = 1;
            r3 = (n - 7) / 3;
        }
        else if(n % 3 == 2){
            r5 = 1;
            r3 = (n - 5) / 3;
        }
        if(r3 < 0 || r5 < 0 || r7 < 0)
            cout << -1 << endl;
        else
            cout << r3 << " " << r5 << " " << r7 << endl;
    }
    return 0;
}
