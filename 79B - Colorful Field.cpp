#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 0, m = 0, k = 0, t = 0;
    int x = 0, y = 0;
    cin >> n >> m >> k >> t;
    int a[k] = {0};
    for(int i = 0; i < k; i++){
        cin >> x >> y;
        a[i] = (x-1)*m +y;
    }
    sort(a,a+k);
    int l = 0;
    for(int i = 0; i < t; i++){
        cin >> x >> y;
        int j = 0;
        int l = (x-1)*m + y;
        while(j < k && l > a[j]){
            j++;
        }
        int c = (l - j) % 3;
        if(l == a[j])
            cout << "Waste" << endl;
        else if(c == 1)
            cout << "Carrots" << endl;
        else if(c == 2)
            cout << "Kiwis" << endl;
        else if(c == 0)
            cout << "Grapes" << endl;

    }
    return 0;
}
