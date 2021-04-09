#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,l = "",r = "";
    int d = 0;
    string h;
    cin >> s;
    cin >> h;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '|'){
            d = 1;
            continue;
        }
        if(d == 0)
            l += s[i];
        else
            r += s[i];
    }
    for(int i = 0; i < h.size(); i++){
        if(l.size() >= r.size()){
            r += h[i];
        }
        else{
            l += h[i];
        }
    }
    if(l.size() == r.size())
        cout << l << "|" << r;
    else
        cout << "Impossible";
    return 0;
}
