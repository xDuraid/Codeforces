#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0;
    cin >> n;
    vector<vector<int>>v(100001);
    vector<pair<int,int>>r;
    int t = 0;
    for(int i = 1; i <= n; i++){
        cin >> t;
        v[t].push_back(i);
    }

    for(int i = 1; i <= 1e5; i++){
        if(v[i].size() == 0)
            continue;
        else if(v[i].size() == 1)
            r.push_back(make_pair(i,0));
        else if(v[i].size() == 2)
            r.push_back(make_pair(i, v[i][1]-v[i][0]));
        else{
            bool b = 1;
            for(int j = 1; j < v[i].size() - 1; j++){
                if(v[i][j] - v[i][j-1] != v[i][j+1] - v[i][j])
                    b = 0;
            }
            if(b)
                r.push_back(make_pair(i,v[i][1]-v[i][0]));
        }
    }
    cout << r.size() << endl;
    for(int i = 0; i < r.size(); i++)
        cout << r[i].first << " " << r[i].second << endl;
    return 0;
}
