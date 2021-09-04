#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int n = 0, k = 0, t = 0;
    cin >> n >> k;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x + k <= 5)
            t++;
    }
    cout << t / 3;
    return 0;
}
