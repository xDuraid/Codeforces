#include <iostream>
#include <set>

using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n = 0, m = 0, s = 0, g = 0;
    cin >> n >> m;
    char a[n][m+1];
    set<int>d;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        for(int j = 0; j < m; j++){
            if(a[i][j] == 'S')
                s = j;
            else if(a[i][j] == 'G')
                g = j;
        }
        if(s < g){
            cout << -1;
            return 0;
        }
        else
            d.insert(s - g);
    }
    cout << d.size();
    return 0;
}
