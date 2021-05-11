#include <iostream>
#include <vector>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, m = 0;
    cin >> n >> m;
    vector<vector<int>> g(n+1,vector<int>(n+1,0));
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        g[a][b] = c;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(g[i][j] > 0){
                for(int k = 1; k <= n; k++){
                    int t = min(g[j][k],g[i][j]);
                    g[i][j] -= t;
                    g[i][k] += t;
                    g[j][k] -= t;
                }
            }
        }
    }
    int sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j)
                continue;
            sum += g[i][j];
        }
    }
    cout << sum;
    return 0;
}
