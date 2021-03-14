#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int n = 0;
    getline(cin,s);
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' || s[i] == '{' || s[i] == '}' || s[i] == ',')
            continue;
        n++;
    }
    cout << n;
    return 0;
}
