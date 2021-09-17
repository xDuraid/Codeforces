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
        int n = 0, x = 0, ans = 0;
        cin >> n >> x;
        int z = 0;
        int p[1000] = {0};
        for(int i = 0; i < n; i++){
            cin >> z;
            p[z] = 1;
        }
        for(int i = 1; i < 1000; i++){
            if(p[i] == 0){
                p[i] = 1;
                x--;
            }
            if(x == 0){
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
