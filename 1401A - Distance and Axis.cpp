#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    IOS
    int t = 0;
    cin >> t;
    while(t--){
        int n = 0, k = 0, r = 0;
        cin >> n >> k;

        if(k >= n)
            r = k - n;
        else if(abs(n - k) % 2 == 0)
            r = 0;
        else
            r = 1;

        cout << r << endl;
    }

    return 0;
}
