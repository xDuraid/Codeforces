#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool ss(pair<int,int> p, pair<int,int> c)
{
    int bp = min(p.first,p.second);
    int ap = min(2*p.first,p.second);
    int bc = min(c.first,c.second);
    int ac = min(2*c.first,c.second);
    return (ap - bp) > (ac - bc);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  
    int n = 0, f = 0;
    long long sum = 0;
    cin >> n >> f;
    vector<pair<int,int>>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
  
    sort(a.begin(),a.end(),ss);
  
    for(int i = 0; i < n; i++){
        if(f != 0){
            sum += min(2*a[i].first, a[i].second);
            f--;
        }
        else{
            sum += min(a[i].first, a[i].second);
        }
    }
    cout << sum;
    return 0;
}
