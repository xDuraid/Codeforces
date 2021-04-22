#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <math.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    char ch[n+2][m+2];
    int d[26] = {0};
    vector<pair<int,int>>S;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> ch[i][j];
            if(ch[i][j] == 'S')
                S.push_back(make_pair(j,i));
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(ch[i][j] == 'S')
                continue;
            int t = INT_MAX;
            for(int q = 0; q < S.size(); q++){
                int a = S[q].first - j;
                int b = S[q].second - i;
                int f = ceil(sqrt(a*a + b*b));
                if(f < t)
                    t = f;
            }
            if(d[ch[i][j] - 'a'] == 0)
                d[ch[i][j] - 'a'] = t;
            else if(d[ch[i][j] - 'a'] > t)
                d[ch[i][j] - 'a'] = t;
        }
    }
    int c = 0, r = 0;
    cin >> c;
    char g[c+1];
    cin >> g;
    for(int i = 0; i < c; i++){
        if(g[i] < 97){
            if(S.size() == 0 || d[g[i] - 'A'] == 0){
                r = -1;
                break;
            }
            else if(d[g[i] - 'A'] > k)
                r++;
        }
        else if(d[g[i] - 'a'] == 0){
            r = -1;
            break;
        }
    }
    cout << r;
    return 0;
}
