#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n = 0, m = 0;
bool valid(long long x, long long y){

    return x <= n && x > 0 && y <= m && y > 0;
}

int main()
{
    IOS;
    long long xc = 0, yc = 0, k = 0, steps = 0, total = 0;
    cin >> n >> m >> xc >> yc >> k;
    
    long long x = 0, y = 0;
    for(int i = 0; i < k; i++){
        cin >> x >> y;
        long long l = 0, r = 1e9, mid = 0;
        while(l <= r){
            mid = (l+r)/2;
            if(valid(xc + x * mid, yc + y * mid)){
                l = mid + 1;
                steps = mid;
            }
            else{
                r = mid - 1;
            }
        }
        total += steps;
        xc += x * steps;
        yc += y * steps;
    }
    cout << total;
    return 0;
}
