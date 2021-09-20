#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

int calc(int p, int t)
{
    return max(3 * p / 10, p - p / 250 * t);
}

int main()
{
    IOS
    int a = 0, b = 0, c = 0, d = 0, m = 0, v = 0;
    cin >> a >> b >> c >> d;
    m = calc(a, c);
    v = calc(b, d);
    if(m > v)
        cout << "Misha";
    else if(v > m)
        cout << "Vasya";
    else
        cout << "Tie";
    return 0;
}
