#include <iostream>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, m = 0;
    cin >> n >> m;
    vector<vector<int>> v(n+1,vector<int>(n+1,0));
    int a = 0, b = 0;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        v[a][b] = 1;
        v[b][a] = 1;
        v[a][0]++;
        v[b][0]++;
    }
    int g = 0;
    bool x = 1;
    while(x){
        vector<int>t;
        for(int i = 1; i <= n; i++){
            if(v[i][0] == 1){
                t.push_back(i);
            }
        }
        for(int i = 0; i < t.size(); i++){
            for(int j = 1; j <= n; j++){
                if(v[t[i]][j] == 1){
                    v[t[i]][j] = 0;
                    v[t[i]][0]--;
                    v[j][t[i]] = 0;
                    v[j][0]--;
                }
            }
        }
        if(t.size())
            g++;
        else
            x = 0;
    }
    cout << g;
    return 0;

}
