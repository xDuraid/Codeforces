#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool ss(pair<int,double> a, pair<int,double> b){
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second > b.second;
}

int main()
{
    IOS
    int n = 0, t1 = 0, t2 = 0, a = 0, b = 0;
    double k = 0, x = 0, y = 0;
    cin >> n >> t1 >> t2 >> k;
    k = (100 - k)/100;
    vector<pair<int,double>> v(n);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        x = a*t1*k + b*t2;
        y = b*t1*k + a*t2;
        v[i].first = i+1;
        v[i].second = max(x, y);
    }
    sort(v.begin(),v.end(), ss);
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << setprecision(2) << fixed << showpoint << v[i].second << endl;
    }
    
    return 0;
}
