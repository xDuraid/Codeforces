#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int n = 0, m = 0, c = 0;
    int x = 0, y = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x > y) m++;
        else if(x < y) c++;
    }
    if(m > c)
        cout << "Mishka";
    else if(m < c)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}
