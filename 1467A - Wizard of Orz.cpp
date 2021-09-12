#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()


int main()
{
    IOS
    TEST
    {
        int n = 0;
        cin >> n;
        if(n <= 2){
            int i = 9;
            while(n--)
                cout << i--;
        }
        else{
            int i = 0;
            cout << 989;
            n -= 3;
            while(n--){
                cout << i % 10;
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}
