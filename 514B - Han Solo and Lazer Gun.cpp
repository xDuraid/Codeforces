#include <iostream>
#include <set>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
int main()
{
    IOS
    int n = 0, x0 = 0, y0 = 0, x = 0, y = 0;
    cin >> n >> x0 >> y0;
    set<double> v;
    double t = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x - x0 == 0){
            t = INT_MAX;
        }
        else{
            t = 1.0 * (y - y0)/(x-x0);
        }
        v.insert(t);
    }
    
    cout << v.size();
    return 0;
}
