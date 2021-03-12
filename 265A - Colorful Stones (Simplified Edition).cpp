#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int j = 0;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == s[j])
            j++;
    }
    cout << ++j;
    return 0;
}
