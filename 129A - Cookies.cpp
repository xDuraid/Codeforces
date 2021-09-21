#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


int main()
{
    IOS
    int n = 0, sum = 0, evens = 0;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        if((x & 1) == 0)
            evens++;
    }
    cout << (sum % 2 ? n - evens : evens);
    return 0;
}
