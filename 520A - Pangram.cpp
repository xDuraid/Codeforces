#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    char a[n];
    int c[128] = {0};
    int r = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 97)
            a[i] += 32;
        c[a[i]]++;
        if(c[a[i]] == 1)
            r++;
    }
    if(r == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

