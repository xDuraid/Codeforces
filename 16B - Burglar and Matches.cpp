#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool ss(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}

int main()
{
    int m = 0, n = 0, r = 0;
    cin >> n >> m;
    vector<pair<int,int>>a(m,{0,0});

    for(int i = 0; i < m; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end(),ss);
    for(int i = 0; i < m; i++){
        if(n != 0){
            if(n >= a[i].first){
                r += a[i].first * a[i].second;
                n -= a[i].first;
            }
            else{
                r += n*a[i].second;
                n = 0;
            }
        }
        else
            break;
    }
    cout << r;
    return 0;

}
