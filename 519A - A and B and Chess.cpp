#include <iostream>
#include <map>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


int main()
{
    IOS
    map<char, int> m = {{'Q',9}, {'R', 5}, {'N', 3}, {'B', 3}, {'P', 1}};
    int b = 0, w = 0;
    char c;
    for(int i = 0; i < 64; i++){
        cin >> c;
        if(c == '.')
            continue;
        else if(c >= 'a')
            b += m[toupper(c)];
        else
            w += m[c];
    }
    if(w == b)
        cout << "Draw";
    else if(w > b)
        cout << "White";
    else
        cout << "Black";
    return 0;
}
