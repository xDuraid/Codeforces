#include <iostream>
#include <iomanip>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int n = 0;
    int x = 0, p = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p;
        x += p;
    }
    cout << setprecision(12) << fixed << showpoint << (double)x/n;
    return 0;
}
