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
        int n = 0, m = 0, ans = 0;
        cin >> n >> m;
        int a[n][4];
        for(int i = 0; i < n; i++){
            cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
        }
        for(int i = 0; i < n; i++){
            if(a[i][1] == a[i][2]){
                ans = 1;
                break;
            }
        }
        if(m % 2 == 1)
            ans = 0;
        cout << (ans == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
