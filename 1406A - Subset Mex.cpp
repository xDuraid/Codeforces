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
        int n = 0, x = 0, ans = 0;
        cin >> n;
        int a[101] = {0};

        for(int i = 0; i < n; i++){
            cin >> x;
            a[x]++;
        }
        for(int i = 0; i < 101; i++){
            if(a[i] == 0){
                ans += i;
                break;
            }
            else{
                a[i]--;
            }
        }
        for(int i = 0; i < 101; i++){
            if(a[i] == 0){
                ans += i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
