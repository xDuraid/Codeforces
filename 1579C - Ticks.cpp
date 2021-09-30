#include <iostream>
#include <vector>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


void solve()
{
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    vector<vector<int>> a(n, vector<int>(m,0));
    vector<vector<int>> b(n, vector<int>(m,0));
    char c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c;
            if(c == '.')
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }
    while(k < 11){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i < k || j < k || j + k > m - 1 || a[i][j] == 0)
                    continue;
                bool flag = 1;
                for(int t = 0; t <= k; t++){
                    if(a[i - t][j - t] == 0 || a[i - t][j + t] == 0){
                        flag = 0;
                        break;
                    }
                }
                if(flag){
                    for(int t = 0; t <= k; t++){
                        b[i - t][j - t] = 1;
                        b[i - t][j + t] = 1;
                    }
                }
            }
        }
        k++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1 && b[i][j] == 0){
                cout << "NO\n";
                return;
            }
        }

    }
    cout << "YES\n";
    return;
}

int main()
{
    IOS
    TEST
    {
        solve();
    }
    return 0;
}

