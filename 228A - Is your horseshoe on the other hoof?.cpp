#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> a(4,0);
    for(int i = 0; i < a.size(); i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    cout << 4 - a.size();
    return 0;
}
