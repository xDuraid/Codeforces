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
        int n = 0;
        cin >> n;
        if(n % 2 == 1){
           cout << 7;
            n -= 3;
        }
        while(n){
            cout << 1;
            n -= 2;
        }
        cout << endl;
    }
    return 0;
}
