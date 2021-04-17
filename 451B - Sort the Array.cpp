#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 0, l = 0, r = 0;
    cin >> n;
    int a[n+1] = {0};
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int i = 1;
    while(i < n && a[i] < a[i+1]){
        i++;
    }
    l = i;
    while(i < n && a[i] > a[i+1]){
        i++;
    }
    r = i;

    reverse(a+l,a+r+1);
    for(int i = 1; i < n; i++){
        if(a[i] > a[i+1]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << l << " " << r;
    return 0;
}
