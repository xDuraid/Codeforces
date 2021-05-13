#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    pair<int,int> a, b;
    vector<pair<int,int>> generals;
    cin  >> a.first >> a.second >> b.first >> b.second;
    int mnx = min(a.first, b.first), mxx = max(a.first, b.first);
    int mny = min(a.second, b.second), mxy = max(a.second, b.second);
    for(int i = mnx; i <= mxx; i++){
        generals.push_back(make_pair(i, mny));
        generals.push_back(make_pair(i, mxy));
    }
    for(int i = mny + 1; i < mxy; i++){
        generals.push_back(make_pair(mnx, i));
        generals.push_back(make_pair(mxx, i));
    }
    int n = 0, r = 0;
    cin >> n;
    vector<pair<int,int>> heaters(n);
    int hr[n] = {0};


    for(int i = 0; i < n; i++){
        cin >> heaters[i].first >> heaters[i].second >> hr[i];
    }

    for(int i = 0; i < generals.size(); i++){
        for(int j = 0; j < heaters.size(); j++){
            int x = generals[i].first - heaters[j].first;
            int y = generals[i].second - heaters[j].second;
            if(x*x + y*y <= hr[j]*hr[j]){
                r++;
                break;
            }
        }
    }
    cout << generals.size() - r;
    return 0;
}
