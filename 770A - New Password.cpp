#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    string a = "abcdefghijklmnopqrstuvwxyz";
    string s = "";
    for(int i = 0; i < n; i++){
        s += a[i % k];
    }
    cout << s;
    return 0;
}
