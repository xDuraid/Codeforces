#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
int main()
{
    IOS
    TEST{
        int n = 0;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i = 0, j = n - 1;
        while(i < j){
            cout << a[i] << " ";
            cout << a[j] << " ";
            i++;
            j--;
        }
        if(n % 2 == 1)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
