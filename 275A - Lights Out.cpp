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
    int a[3][3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int x = 0;
            x += a[i][j];
            if(i != 0)
                x += a[i - 1][j];
            if(i != 2)
                x += a[i + 1][j];
            if(j != 0)
                x += a[i][j - 1];
            if(j != 2)
                x += a[i][j + 1];
            if(x != 0 && x % 2 == 1)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }
    return 0;
}
