#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int a[128] = {0};
    int n = 0;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        a[s[i]] = 1;
    }
    for(int i = 'a'; i <= 'z'; i++){
        n += a[i];
    }
    cout << n;
    return 0;
}
