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
        int n = 0, x = -1;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 1; i < n - 1; i++){
            if(a[i] > a[i - 1] && a[i] > a[i + 1]){
                x = i + 1;
                break;
            }
        }
        if(x == -1)
            cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << x - 1 << " " << x << " " << x + 1 << endl;
        }
    }
    return 0;
}
