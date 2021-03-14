#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s.size() > 10)
            cout << s.front() << s.size() - 2 << s.back() << endl;
        else
            cout << s << endl;
    }
    return 0;
}
