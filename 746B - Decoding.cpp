#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    int i = n-2, j = 0;
    while(i > -1){
        cout << s[i];
        i -= 2;
    }
    if(n % 2 == 0)
        j = 1;
    while(j < n){
        cout << s[j];
        j += 2;
    }

    return 0;

}
