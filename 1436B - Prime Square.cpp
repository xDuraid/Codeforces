#include <iostream>
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
    TEST
    {
        int n = 0;
        cin >> n;
        int a[n][n] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j || i + j + 1 == n)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        }
        if(n % 2 == 1){
            a[n / 2][n / 2 + 1] = 1;
            a[n / 2][n / 2 - 1] = 1;
            a[n / 2 + 1][n / 2] = 1;
            a[n / 2 - 1][n / 2] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
