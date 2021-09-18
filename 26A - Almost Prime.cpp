#include <iostream>
#include <vector>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

int main()
{
    IOS
    vector<int>primes;
    int n = 0, ans = 0;
    cin >> n;
    for(int i = 2; i <= n; i++){
        bool b = 1;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                b = 0;
                break;
            }
        }
        if(b)
            primes.push_back(i);
    }
    for(int i = 1; i <= n; i++){
        int x = 0;
        for(int j = 0; j < primes.sz && primes[j] <= i; j++){
            if(i % primes[j] == 0)
                x++;
        }
        ans += (x == 2);
    }
    cout << ans;
    return 0;
}
