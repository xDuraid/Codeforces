#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n = 0, t = 0, r = INT_MAX;
    bool b = 0;
    cin >> n;
    char s[n];
    int a[n] = {0};
    cin >> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'R' && s[i+1] == 'L'){
            t = (a[i+1] - a[i] + 1)/2;
            if(t < r)
                r = t;
            b = 1;
        }
    }
    if(b)
        cout << r;
    else
        cout << -1;
    return 0;
}
