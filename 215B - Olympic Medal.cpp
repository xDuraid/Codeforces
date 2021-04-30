#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    IOS;
    int r1 = 0, p1 = 0, p2 = INT_MAX, n = 0, a = 0, b = 0, t = 0;
    double r2 = 0.0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t > r1)
            r1 = t;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t > p1)
            p1 = t;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t < p2)
            p2 = t;
    }
    cin >> a >> b;
    r2 = r1 * sqrt((double) (b * p1) / (a * p2 + b * p1));
    cout << setprecision(12) << fixed << showpoint << r2;
    return 0;
}
