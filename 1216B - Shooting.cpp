#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


int main()
{
    IOS
    int n = 0, ans = 0;
    cin >> n;
    vector <pair<int,int>> a(n);
  
    for(int i = 0; i < n; i++){
        cin >> a[i].fi;
        a[i].se = i + 1;
    }
  
    sort(a.begin(), a.end(), [](pair<int,int> a, pair<int,int> b){
         return a.fi > b.fi;});
  
    for(int i = 0; i < n; i++)
        ans += a[i].fi * i + 1;
  
    cout << ans << endl;
  
    for(int i = 0; i < n; i++)
        cout << a[i].se << " ";

    return 0;
}
