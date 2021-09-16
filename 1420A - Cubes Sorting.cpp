#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<stream_size>::max(), '\n');

int main()
{
    IOS
    TEST
    {
        int n = 0, x = 0, y = 0;
        bool ans = 0;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] >= a[i]){
                ans = 1;
                break;
            }
        }
        cout << (ans == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
